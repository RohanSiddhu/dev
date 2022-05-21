#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>
#include <linux/types.h>
#include <linux/slab.h>

struct birthday {
    char name[33];
    int day;
    int month;
    int year;
    struct list_head list;
};

LIST_HEAD(birthday_list);

/* This function append birthday node to the given list. */
void append_birthday(struct list_head *list, const char* name, int day, int month, int year) {
    struct birthday *person;
    int i;

    person = kmalloc(sizeof(*person), GFP_KERNEL);
    for (i = 0; name[i] != 0; i++) {
        person->name[i] = name[i];
    }
    person->name[i] = 0;
    person->day = day;
    person->month = month;
    person->year = year;
    INIT_LIST_HEAD(&person->list);

    list_add_tail(&person->list, list);
}

/* Entry point */
int birthday_init(void) {
    printk(KERN_INFO "Loading Module\n");

    // Inserting elements to birthday_list.
    append_birthday(&birthday_list, "Shivani Siddhu", 21, 11, 1995);
    append_birthday(&birthday_list, "Rohan Siddhu", 17, 10, 2002);
    append_birthday(&birthday_list, "Eshant Siddhu", 25, 12, 2000);
    append_birthday(&birthday_list, "Anshuman Siddhu", 29, 8, 2010);
    append_birthday(&birthday_list, "Tarun Siddhu", 16, 8, 1974);

    // Traversing birthday_list.
    struct birthday *ptr;

    list_for_each_entry(ptr, &birthday_list, list) {
        printk(KERN_INFO "%s\'s birthday (dd/mm/yyyy): %02d/%02d/%04d\n",
                ptr->name, ptr->day, ptr->month, ptr->year);
    }

    return 0;
}

void birthday_exit(void) {
    printk(KERN_INFO "Removing Module\n");

    // Cleaning up
    // Release birthday_list memory
    struct birthday *ptr, *next;

    list_for_each_entry_safe(ptr, next, &birthday_list, list) {
        list_del(&ptr->list);
        kfree(ptr);
    }
}

/* Register module entry and exit points. */
module_init(birthday_init);
module_exit(birthday_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Birthday Module: Use circular, doubly linked list of kernel to store \
        birthdays.");
MODULE_AUTHOR("Rohan Siddhu");
