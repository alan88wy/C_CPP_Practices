/*
 * =====================================================================================
 *
 *       Filename:  str04.c
 *
 *    Description: 1. If copying via strncpy() hits the buffer limit, a terminating null-character won't be written.
2. strncpy() always completely fills the destination, with null bytes if necessary.
 *
 *        Version:  1.0
 *        Created:  12/04/19 22:39:42
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
#include <assert.h>


int main(void) 
{
    char dst[24] = "Clownfish: "; 
    char src[] = "Marvin and Nemo"; 

    size_t len = strlen(dst);

    strncpy(dst, src, sizeof(dst)); 
    dst[sizeof(dst)/sizeof(*dst) - 1] = '\0';
    printf("%zu: [%s]\n", strlen(dst), dst);

    return 0;
}



