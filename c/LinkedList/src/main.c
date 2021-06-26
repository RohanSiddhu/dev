#include "main.h"


/**
 * @brief Main function, programs execution starts here.
 * 
 * @return int 
 */

int main() {
#ifdef USE_CONFIG
    printf("Version %i.%i\n\n", Test_VERSION_MAJOR, Test_VERSION_MINOR);
#endif

    SinglyListi* list = NULL;

    clock_t startClock = clock();
    for(int i = 1; i < 10000; i++) {
        SinglyAppendi(&list, i);
    }

    SinglyDisplayi(list);
    SinglyCounti(list);

    SinglyAddi(list, 0, 81);
    SinglyDisplayi(list);
    SinglyCounti(list);
    clock_t endClock = clock();
    double duration = (double) (endClock - startClock) / CLOCKS_PER_SEC;

    printf("\nExecution time: %lf\n", duration);

    getchar();
    return 0;
}
