#include <stdio.h>

// Define is doing what stdbool.h is doing

#define bool int
#define true 1
#define false 0

int main(void)
{
    bool x = true;
    bool y = false;

    if (x) /* Functionally equivalent to if (x != 0) or if (x != false) */ 
    {
        puts("This will print!"); 
    }
    
    if (!y) /* Functionally equivalent to if (y == 0) or if (y == false) */ 
    {
        puts("This will also print!"); 
    }

}