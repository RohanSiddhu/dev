#include "main.h"

int main() {
#ifdef USE_CONFIG
    printf("Version %i.%i\n\n", Test_VERSION_MAJOR, Test_VERSION_MINOR);
#endif

    SinglyListi* list = NULL;

    for(int i = 1; i < 100001; i++) {
        SinglyAppendi(&list, i);
    }

    SinglyDisplayi(list);

    getchar();
    return 0;
}
