/**
 * This program illustrate the use of 'list' library.
 * 
 * Coded By: Rohan Siddhu
 * Date: 21/06/2021
 * Last Modified: 09/07/2021
 */


#pragma once

#include "Config.h"
#include "list.h"

#include <stdio.h>
#include <stdlib.h>


/**
 * Mactos
 */

#define PROMPT() printf("\n>>> ")
#define INPUT(X) scanf("%c", &(X))


/**
 * Prototype Declaration.
 */

void clear_screen();
void pause();
void main_menu();
void singly_list_option();
void doubly_list_option();
