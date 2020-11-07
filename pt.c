/*
 * =====================================================================================
 *
 *       Filename:  pt.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/14/2020 15:25:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <inttypes.h> /* for uintptr_t and PRIXPTR */ 
#include <stdio.h> /* for printf() */

int main(void)
{
int i;
int *p = &i;
printf("The address of i is 0x%" PRIXPTR ".\n", (uintptr_t)p); 
return 0;
}
