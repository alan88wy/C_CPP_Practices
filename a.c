/*
 * =====================================================================================
 *
 *       Filename:  a.c
 *
 *    Description:  Example
 *
 *        Version:  1.0
 *        Created:  02/04/2020 21:07:06
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
    double A[5] = {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3E+25,
        [3] = 0.00007,

    };

    for (size_t i = 0; i<5; i++) {
        printf("element %zu is %g, \tits square is %g\n", i, A[i], A[i]*A[i]);
    };
    return EXIT_SUCCESS;
}
