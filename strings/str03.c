/*
 * =====================================================================================
 *
 *       Filename:  str03.c
 *
 *    Description: A second option, with better performance, is to use strncat() (a buffer overflow checking version of strcat()) - it takes a third argument that tells it the maximum number of bytes to copy: 
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

    /*
    strncat(dst, src, sizeof(dst) - len - 1); 
    printf("%zu: [%s]\n", strlen(dst), dst);
    */

    assert(len < sizeof(dst) - 1);
    strncat(dst + len, src, sizeof(dst) - len - 1); 
    printf("%zu: [%s]\n", strlen(dst), dst);

    return 0;
}



