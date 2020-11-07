/*
 * =====================================================================================
 *
 *       Filename:  scanf01.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/01/2020 21:29:04
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

int main()
{
  int a;
  float b;
  printf("Enter int and float : \n");
  int x = scanf("%d%f", &a, &b);
  printf("Decimal Number is : %d\n",a);
  printf("Floating-Point Number is : %f\n",b);
  printf("Return Value: %d\n",x);
  return 0;
}
