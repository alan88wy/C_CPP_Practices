/*
 * =====================================================================================
 *
 *       Filename:  strcmp.c
 *
 *    Description: The strcmp function lexicographically compare two null-terminated character arrays. The functions return a negative value if the first argument appears before the second in lexicographical order, zero if they compare equal, or positive if the first argument appears after the second in lexicographical order.
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
    int result = strcmp(lhs, rhs); // Compute comparison once

    if (result < 0) {
        printf("%s comes before %s\n", lhs, rhs);
    } else if (result == 0) {
        printf("%s equals %s\n", lhs, rhs);
    } else { // last case : result > 0
        printf("%s comes after %s\n", lhs, rhs);
    }
}

int main(void) {
    compare("BBBB", "bbBB");
    compare("BBB", "BBB");
    compare("BBB", "CCCCC");
    compare("BBB", "AAAAA");

    return 0;
}
