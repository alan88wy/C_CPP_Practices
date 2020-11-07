/*
 * =====================================================================================
 *
 *       Filename:  pointer_size.c
 *
 *    Description: Print Pointer size 
 *
 *        Version:  1.0
 *        Created:  03/29/2020 17:31:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    printf("Size of int pointer: %zu\n", sizeof (int*));
    printf("Size of int variable: %zu\n", sizeof (int));
    printf("Size of char pointer: %zu\n", sizeof (char*));
    printf("Size of char variable: %zu\n", sizeof (char));
    printf("Size of short pointer: %zu\n", sizeof (short*));
    printf("Size of short variable: %zu\n", sizeof (short));
}
