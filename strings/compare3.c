/*
   strncmp and strncasecmp compare at most n characters:
*/

#include <stdio.h> 
#include <string.h>

void compare(char const *lhs, char const *rhs, int n) 
{
    int result = strncmp(lhs, rhs, n); // compute comparison once 
    
    if (result < 0) {
        printf("%s comes before %s\n", lhs, rhs); 
    } else if (result == 0) {
        printf("%s equals %s\n", lhs, rhs); 
    } else { // last case: result > 0
        printf("%s comes after %s\n", lhs, rhs); 
    }
}

int main(void)
{
    compare("BBB", "Bb", 1); 
    compare("BBB", "Bb", 2); 
    compare("BBB", "Bb", 3); 
    
    return 0;
}