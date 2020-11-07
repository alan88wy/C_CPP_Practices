/*
 * =====================================================================================
 *
 *       Filename:  enum01.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/09/2020 22:15:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h> /* for EXIT_SUCCESS */ 
#include <stdio.h> /* for printf() */

enum Dupes {
    Base, /* Takes 0 */
    One, /* Takes Base + 1 */
    Two, /* Takes One + 1 */
    Negative = -1,
    AnotherZero /* Takes Negative + 1 == 0, sigh */
};

int main(void)
{
    printf("Base = %d\n", Base);
    printf("One = %d\n", One);
    printf("Two = %d\n", Two); printf("Negative = %d\n", Negative); printf("AnotherZero = %d\n", AnotherZero);
    return EXIT_SUCCESS; 
}
