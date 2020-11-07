/*
 * =====================================================================================
 *
 *       Filename:  strcasecmp.c
 *
 *    Description:  As strcmp, strcasecmp function also compares lexicographically its arguments after translating each character to its lowercase correspondent:
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

void compare(char const *lhs, char const *rhs)
{
    int result = strcasecmp(lhs, rhs); // Compute comparison once

    if (result < 0) {
        printf("%s comes before %s\n", lhs, rhs);
    } else if (result == 0) {
        printf("%s equals %s\n", lhs, rhs);
    } else { // last case : result > 0
        printf("%s comes after %s\n", lhs, rhs);
    }
}

int main(void) {
    compare("BBB", "BBB");
    compare("BBB", "bBB");
    compare("BBB", "ccCCC");
    compare("BBB", "aaaaaa");

    return 0;
}
