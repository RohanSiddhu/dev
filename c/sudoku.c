/**
 * Description: This program takes solved sudoku as an input and checks whether the solution is correct or not.
 * Coded By: Rohan Siddhu
 * Date: 18/12/2020
 * Date Completed: 31/12/2020
 * Last modified: 31/12/2020
 * */

#include <stdio.h>

#define INPUT

#define INIT_ARR(x) for(int i = 0; i < 9; i++) {\
        (x)[i] = 0;\
        }

int main(void) {
#ifdef INPUT
    signed int sudo[3][3][3][3];
    signed char check[9] = {0};
    signed char flag = 1;
#endif
#ifndef INPUT
    signed int sudo[3][3][3][3] = {
        {
            {
                {1, 2, 3},
                {1, 2, 3},
                {1, 2, 3}
            },
            {
                {4, 5, 6},
                {4, 5, 6},
                {4, 5, 6}
            },
            {
                {7, 8, 9},
                {7, 8, 9},
                {7, 8, 9}
            }
        },
        {
            {
                {1, 2, 3},
                {1, 2, 3},
                {1, 2, 3}
            },
            {
                {4, 5, 6},
                {4, 5, 6},
                {4, 5, 6}
            },
            {
                {7, 8, 9},
                {7, 8, 9},
                {7, 8, 9}
            }
        },
        {
            {
                {1, 2, 3},
                {1, 2, 3},
                {1, 2, 3}
            },
            {
                {4, 5, 6},
                {4, 5, 6},
                {4, 5, 6}
            },
            {
                {7, 8, 9},
                {7, 8, 9},
                {7, 8, 9}
            }
        }
    };
#endif

#ifdef INPUT
    // Taking Input
    printf(" Please enter your solution: \n");
    for(short i = 0; i < 3; i++) {
        for(short j = 0; j < 3; j++) {
            printf("Row %d: ", (i * 3 + j + 1));
            for(short k = 0; k < 3; k++) {
                for(short l = 0; l < 3; l++) {
                    scanf("%d", &sudo[i][k][j][l]);
                }
            }
        }
    }
#endif

    // Print The Input Solution.
    printf("\n Given solution is: \n");
    for(short i = 0; i < 3; i++) {
        for(short j = 0; j < 3; j++) {
            printf("Row %d: ", (i * 3 + j + 1));
            for(short k = 0; k < 3; k++) {
                for(short l = 0; l < 3; l++) {
                    printf("%3d", sudo[i][k][j][l]);
                }
            }
            printf("\n");
        }
    }

    // Checking Block.
    for(short i = 0; i < 3 && flag; i++) {
        for(short j = 0; j < 3 && flag; j++) {
            for(short k = 0; k < 3 && flag; k++) {
                for(short l = 0; l < 3 && flag; l++) {
                    if( 1 <= sudo[i][j][k][l] <= 9 ) {
                        check[sudo[i][j][k][l] - 1] ? (flag = 0) : (check[sudo[i][j][k][l] - 1] = 1);
                    }
		            else {
		    	        flag = 0;
		            }
                }
            }
            INIT_ARR(check)
        }
    }

    INIT_ARR(check)
    // Checking Row
    for(short i = 0; i < 3; i++) {
        for(short j = 0; j < 3; j++) {
            for(short k = 0; k < 3; k++) {
                for(short l = 0; l < 3; l++) {
                    if( 1 <= sudo[i][k][j][l] <= 9 ) {
                        check[sudo[i][j][k][l] - 1] ? (flag = 0) : (check[sudo[i][j][k][l] - 1] = 1);
                    }
                    else {
                        flag = 0;
                    }
                }
            }
            INIT_ARR(check)
        }
    }

    INIT_ARR(check)
    // Checking Column
    for(short i = 0; i < 3; i++) {
        for(short j = 0; j < 3; j++) {
            for(short k = 0; k < 3; k++) {
                for(short l = 0; l < 3; l++) {
                    if( 1 <= sudo[k][i][l][j] <= 9 ) {
                        check[sudo[i][j][k][l] - 1] ? (flag = 0) : (check[sudo[i][j][k][l] - 1] = 1);
                    }
                    else {
                        flag = 0;
                    }
                }
            }
            INIT_ARR(check)
        }
    }

    if(!flag) {
        printf("\n\n Wrong Solution!!\n");
    }
    else
    {
        printf("\n\n Correct Solution.\n");
    }
    

    getchar();
    getchar();
    return 0;
}
