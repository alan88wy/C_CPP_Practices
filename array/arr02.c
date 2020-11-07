/*
 * =====================================================================================
 *
 *       Filename:  arr02.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/29/2020 17:55:10
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
#define DIM_X 20
#define DIM_Y 20

int main(void) {
    int arr[DIM_X][DIM_Y];

    size_t i,j;

    for (i=0; i < DIM_X; i++) {
        for (j=0; j < DIM_Y; j++) {
            /* Always do [i,j] and not [j,i]. [j,i] is not efficient due to how storage is allocated, store and access.  */
            arr[i][j] = i + j; 
        }
    }

    for (i=0; i < DIM_X; i++) {
        for (j=0; j < DIM_Y; j++) {
            printf("Value of arr[%zu][%zu] is : %d\n", i, j, arr[i][j]);
        }
    }
}
