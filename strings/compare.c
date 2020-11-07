#include <stdio.h> 
#include <string.h>

/* The strcmp function lexicographically compare two 
   null-terminated character arrays. The functions return a 
   negative value if the first argument appears before the 
   second in lexicographical order, zero if they compare 
   equal, or positive if the first argument appears after 
   the second in lexicographical order.
*/

void compare(char const *lhs, char const *rhs) 
{
    int result = strcmp(lhs, rhs); // compute comparison once 
    
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
    compare("BBB", "CCCCC"); 
    compare("BBB", "AAAAAA"); 
    return 0;
}
