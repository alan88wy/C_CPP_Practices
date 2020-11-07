/*
 * =====================================================================================
 *
 *       Filename:  power.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2020 14:09:37
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

int power(int i, int j);

int main(void) 
{
    printf("power : %d\n", power(2, 5));
}

int power(int num, int p) 
{
    int result=0;

    if (p==0) {
        return 1;
    } else if (p > 0) {
        result=num;
        for (int k=0; k < p-1; k++) {
            result *= num;
        }
    }

    return result;
}
