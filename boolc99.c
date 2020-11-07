#include <stdio.h>

int main(void)
{
    _Bool x = 1;
    _Bool y = 0;

    if (x) /* Functionally equivalent to if (x != 0) or if (x != false) */ 
    {
        puts("This will print!"); 
    }

    if (!y) /* Functionally equivalent to if (y == 0) or if (y == false) */ 
    {
        puts("This will also print!"); 
    }
}


