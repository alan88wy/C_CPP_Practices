/*
 * =====================================================================================
 *
 *       Filename:  snprintf.c
 *
 *    Description: To avoid buffer overrun, snprintf() may be used. It is not the best solution performance-wise since it has to parse the template string, but it is the only buffer limit-safe function for copying strings readily-available in standard library, that can be used without any extra steps. 
 *
 *        Version:  1.0
 *        Created:  12/09/19 21:21:51
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
#include <string.h>

int main(void) {
    char a[] = "012345678901234567890";
    char b[8];

#if 0
    strcpy(b,a); /* causes buffer overrun (undefined behavior), so do not execute this here! */
#endif

    snprintf(b, sizeof(b), "%s", a); /* does not cause buffer overrun */

    printf("%s\n", b); /* "0123456" will be printed */

    return 0;

}
