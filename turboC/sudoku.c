/**
 * Description: This program takes solved sudoku as an input and checks whether the solution is correct or not.
 * Coded By: Rohan Siddhu
 * Date: 18/12/2020
 * Last modified: 18/12/2020
 * */

#include <stdio.h>

//#pragma warning(suppress : 4996)

#define INPUT

int main(void) {
#ifdef INPUT
    signed short sudo[3][3][3][3];
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
    };      // A 4-dimensional array to represent sudoku board.
#endif

#ifdef INPUT
    // Taking Input
    printf(" Please enter your solution: \n");
    for (short i = 0; i < 3; i++) {
        for (short j = 0; j < 3; j++) {
            printf("Row %d: ", (i * 3 + j + 1));
            for (short k = 0; k < 3; k++) {
                for (short l = 0; l < 3; l++) {
                    scanf("%hi", &sudo[i][k][j][l]);
                    //printf("%18p - %3d", &sudo[i][k][j][l], sudo[i][k][j][l]);
                }
            }
        }
    }
#endif

    //printf("\n Debug: %3d", sudo[0][1][0][0]);

    // Print The Input Solution.
    printf("\n Given solution is: \n");
    for (short i = 0; i < 3; i++) {
        for (short j = 0; j < 3; j++) {
            printf("Row %d: ", (i * 3 + j + 1));
            for (short k = 0; k < 3; k++) {
                for (short l = 0; l < 3; l++) {
                    printf("%3d", sudo[i][k][j][l]);
                }
            }
            printf("\n");
        }
    }

    getchar();
    getchar();
    return 0;
}