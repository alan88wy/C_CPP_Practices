/*
 * =====================================================================================
 *
 *       Filename:  ptr2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2020 21:03:24
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
    const int *p1;
    const int * const *p;

    p = &p1;

    *p = &b; /*  Error. **p = &b; is ok  */
    *p = 100; /*  Error  */

}
