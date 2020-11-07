#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer;

    if ((buffer = malloc(1024)) != NULL)
    {
        printf("Malloc successful!\n");
        printf("Size of buffer = %lu\n", sizeof(buffer));
        free(buffer);
    }
    else
    {
        printf("Malloc Error !\n");
    }
    
}