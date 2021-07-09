/**
 * Description: 
 * Coded By: Rohan Siddhu
 * Date: 21/06/2021
 * Last Modified: 09/07/2021
 */

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


/**
 * @brief Add value after the give position.
 */

unsigned char SinglyAddi(SinglyListi* li, int position, int value) {
    SinglyListi *temp, *p;
    temp = li;

    for (int i = 0; i < position; i++) {    // Traverse to the given position.
        temp = temp->next;

        if(temp == NULL) {      // If position is invalid.
            printf("Invalid position %d\n", position);
            return 0;
        }
    }

    p = (SinglyListi*) malloc(sizeof(SinglyListi));
    p->data = value;
    p->next = temp->next;
    temp->next = p;

    return 1;
}


/**
 * @brief Count the total number of nodes in the list.
 */

void SinglyCounti(SinglyListi* li) {
    int count = 0;

    for (count = 0; li != NULL; count++) {
        li = li->next;
    }

    printf("Total Nodes: %d\n", count);
}
