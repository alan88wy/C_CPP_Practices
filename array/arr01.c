/*
 * =====================================================================================
 *
 *       Filename:  arr01.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/29/2020 17:27:33
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
    char arr[20];

    printf("Size of arr : %lu\n", sizeof(arr));

    size_t i,j;

    for (i=0; i < sizeof(arr); i++) 
    {
        /*  Convert integer to character  */
        arr[i] = i + '0';
    }

    for (i=0; i < sizeof(arr); i++) 
    {
        printf("Array arr item %zu is : %c\n", i, arr[i]); 
    }
}
