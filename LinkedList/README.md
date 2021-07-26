# Linked List

This project is to test and demonstrate the 'linked list' library, developed in 'c' by me.

The library implement various type of linked list and functions to operate on them.
*Note - The library is still in its initial phase. Also, it is my casual work and may contain bugs.*

## Current Features

### 1. Singly Linked List
*Datatype -* SinglyListi

*Operations:*

    1. unsigned char SinglyAppendi(SinglyListi** li, int value);
        Add 'value' to the end of the list.
    2. void SinglyDisplayi(SinglyListi* li);
        Display all list nodes; prints NULL if empty.
    3. unsigned char SinglyAddi(SinglyListi* li, int position, int value);
        Add 'value' after 'position'.
    4. void SinglyCounti(SinglyListi* li);
        Count total number of nodes in 'li'.
    5. unsigned char SinglyAddAtBegi(SinglyListi* li, int value);
        Add 'value' at the beginning of the list
