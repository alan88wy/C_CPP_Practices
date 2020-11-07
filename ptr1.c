/*
 * =====================================================================================
 *
 *       Filename:  ptr1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2020 20:58:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

int main(void) 
{
    int b;
    int *p1;
    int * const *p;

    p = &p1;
    /*   *p = &b;  will give you error. **p = &b; is ok */
    **p = b; /* ok */
    **p = 100;
}
