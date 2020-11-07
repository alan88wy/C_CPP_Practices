/*
 * =====================================================================================
 *
 *       Filename:  max.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/08/2020 15:46:53
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

void rFindMaxAr (int *ar, int size, int *max);

int main ()
{
  int ar[50], i, max, size;
  printf ("Enter array size: \n");
  scanf ("%d", &size);
  printf ("Enter %d numbers: \n", size);
  for (i = 0; i < size; i++)
    scanf ("%d", &ar[i]);
  max = ar[0];
  rFindMaxAr (ar, size, &max);
  printf ("rFindMaxAr(): %d\n", max);
  return 0;
}
void rFindMaxAr (int *ar, int size, int *max)
{
    /* Write your code here */

    if (size > 1) {
        if (ar[size-1] > *max)
        {    
           *max = ar[size-1];
        }
        rFindMaxAr(ar, size - 1, max);
    }
}
