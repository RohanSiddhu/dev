#pragma once

#include <stdio.h>
#include <stdlib.h>


/**
 * Singly Linked List.
 * Type: int
 */

typedef struct SinglyListi {
    int data;
    struct SinglyListi* next;
} SinglyListi;

unsigned char SinglyAppendi(SinglyListi** li, int value);     // Add item to the end of the list.
void SinglyDisplayi(SinglyListi* li);      // Display all the list nodes; print NULL if empty.
