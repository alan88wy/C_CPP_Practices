/*
 * =====================================================================================
 *
 *       Filename:  func_order.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2020 21:17:57
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

void function(int a, int b) {
    printf("%d %d\n", a, b);
}

int main(void)
{
    int a = 1;

    function(a++, ++a);
    function(++a, a++);

    return 0;
}
