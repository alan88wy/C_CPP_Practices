#include <stdio.h>

int main(void) 
{ 
    int a = 10, b;
    char c[] = "abc", *d;
    b = a; /* Integer is copied */
    a = 20; /* Modifying a leaves b unchanged - b is a 'deep copy' of a */ 

    printf("a = %d b = %d\n", a, b); /* "20 10" will be printed */

    d = c;
    /* Only copies the address of the string -
    there is still only one string stored in memory */

    c[1] = 'x';

    /* Modifies the original string - d[1] = 'x' will do exactly the same thing */

    printf("c = %s d = %s\n", c, d); /* "axc axc" will be printed */ 

    return 0;
}
