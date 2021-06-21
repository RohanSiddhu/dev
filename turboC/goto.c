#include <stdio.h>

int main(void) {
    int i = 0;

    goto check;

    print:
    puts("Hello, World!");
    i++;

    check:
    if(i < 10) goto print;

    puts("Done! Press enter to exit.\n");

    getchar();
    return 0;
}