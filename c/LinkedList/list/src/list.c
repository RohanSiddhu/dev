#include "list.h"

/**
 * Singly Linked List function declatation.
 */


/**
 * SinglyAppendi: Add a node to the end of the list.
 */

unsigned char SinglyAppendi(SinglyListi** li, int value) {
    /* If list is empty. */
    if (*li == NULL) {
        *li = (SinglyListi*) malloc(sizeof(SinglyListi));    // Allocate memory.
        if(*li == NULL) {
            printf("Memory allocation failed!!\n");
            return 0;
        }

        // Assign value.
        (*li)->data = value;
        (*li)->next = NULL;
    }
    else {      // Else if, the list is not empty.
        SinglyListi* temp = *li;

        while (temp->next != NULL) {       // Traverse to the end of the list.
            temp = temp->next;
        }

        temp->next = (SinglyListi*) malloc(sizeof(SinglyListi));  // Allocate memory.
        if(temp->next == NULL) {
            printf("Memory allocation failed!!\n");
            return 0;
        }
        temp = temp->next;
        
        // Assign value.
        temp->data = value;
        temp->next = NULL;
    }

    return 1;       // If successfull then return 1.
}


/**
 * SinglyDisplayi: Print all the list nodes; print 'NULL' if empty.
 */

void SinglyDisplayi(SinglyListi* li) {
    if(li == NULL) {
        printf("NULL\n");
    }
    else {
        while (li != NULL) {
            printf("Data: %9d, Next: %p\n", li->data, li->next);
            li = li->next;
        }
    }
}
