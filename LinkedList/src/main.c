/**
 * Description: 
 * Coded By: Rohan Siddhu
 * Date: 21/06/2021
 * Last Modified: 22/07/2021
 */


#include "main.h"


/**
 * @brief Main function, programs execution starts here.
 * 
 * @return int 
 */

int main() {
    clear_screen();
    printf("Linked List %i.%i\n\n", Test_VERSION_MAJOR, Test_VERSION_MINOR);    // Library Version.

    main_menu();

    return 0;
}


void clear_screen() {
#ifdef _WIN64
    system("cls");
#elif __linux__
    system("clear");
#endif
}

void pause() {
#ifdef _WIN64
    system("PAUSE");
#elif __linux__
    system("read -n1 -r -p \"Press any key to continue...\"");
#endif
}


void main_menu() {
    printf("1. Singly Linked List\n");
    printf("2. Doubly Linked List\n");
    printf("0. Exit\n");

    PROMPT();
    char input;
    INPUT(input);

    switch(input) {
    case '1':
        singly_list_option();
        clear_screen();
        main_menu();
        break;
    case '2':
        doubly_list_option();
        clear_screen();
        main_menu();
        break;
    case '0':
        break;
    default:
        clear_screen();
        main_menu();
    }
}


void singly_list_option() {
    clear_screen();

    printf("\n1. Display\n");
    printf("2. Append\n");
    printf("3. Add\n");
    printf("4. Add At Begning\n");
    printf("5. Count\n");
    printf("6. Back\n");

    PROMPT();
    char input;
    INPUT(input);

    switch(input) {
    case '1':
        break;
    case '2':
        break;
    case '3':
        break;
    case '4':
        break;
    case '5':
        break;
    case '6':
        break;
    default:
        singly_list_option();
    }
}


void doubly_list_option() {
    printf("No available.\n");
    pause();
}
