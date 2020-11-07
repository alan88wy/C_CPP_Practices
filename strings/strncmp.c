/*
 * =====================================================================================
 *
 *       Filename:  strncmp.c
 *
 *    Description: strncmp and strncasecmp compare at most n characters
 *
 *        Version:  1.0
 *        Created:  12/12/19 20:12:59
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

void compare(char const *lhs, char const *rhs, int n)
{
    int result = strncmp(lhs, rhs, n); // Compute comparison once

    if (result < 0) {
        printf("%d %s comes before %s\n", n, lhs, rhs);
    } else if (result == 0) {
        printf("%d %s equals %s\n", n, lhs, rhs);
    } else { // last case : result > 0
        printf("%d %s comes after %s\n", n, lhs, rhs);
    }
}

int main(void) {
    compare("BBB", "Bb", 1);
    compare("BBB", "Bb", 2);
    compare("BBB", "Bb", 3);


    return 0;
}
