/**
 * Description: 
 * Coded By: Rohan Siddhu
 * Date: 21/06/2021
 * Last Modified: 22/07/2021
 */

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
unsigned char SinglyAddi(SinglyListi* li, int position, int value);    // Add the given value after the given position.
void SinglyCounti(SinglyListi* li);     // Count the total numbet of nodes in the list.
unsigned char SinglyAddAtBegi(SinglyListi* li, int value);      // Add 'value' at the begnning of the list.
