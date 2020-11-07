/*
 * =====================================================================================
 *
 *       Filename:  ptr3.c
 *
 *    Description:  Demonstrate Pointer to Pointer to Array
 *
 *        Version:  1.0
 *        Created:  04/04/2020 16:51:34
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

int main(void) 
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = a;
    int **q;
    int *r;

    printf("Printing array: \n");
    for (int i=0; i < 10; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");

    printf("Printing third element of p (pointer to array - *p = a): \n");
    printf("*p + 2  = %d\n", *(p+2));
    printf("p[2]  = %d\n", p[2]);

    q = &p;

    printf("Printing third element of q (pointer to pointer to array q = &p) : \n");
    printf("**q+2 =  %d\n", **q+2);
    printf("(*q)[2] =  %d\n", (*q)[2]);

    r = a;

    printf("Printing third element of r (pointer to array - r = a): \n");
    printf("*(r+2) : %d\n", *(r+2));
    printf("r[2] : %d\n", r[2]);

}
