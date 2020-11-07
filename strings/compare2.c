#include <stdio.h> 
#include <string.h>

void compare(char const *lhs, char const *rhs) 
{
    /*
       strcasecmp function also compares lexicographically 
       its arguments after translating each character to its 
       lowercase correspondent:
    */

    int result = strcasecmp(lhs, rhs); // compute comparison once 
    
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
    compare("BBB", "BBB"); 
    compare("BBB", "ccCCC"); 
    compare("BBB", "aaaaaa"); 
    return 0;
}