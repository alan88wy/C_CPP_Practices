/*
#include <stdio.h>

static const size_t N = 5;

int main(void) {

    size_t k = 0;
    int arr[] = {1, 2, 3, 4, 5}; 
    
    for(k = 0; k < N; k++)
    {
    printf("\n\t%d", *(arr + k)); 
    }

    return 0; 
}

*/

// Below are the same as the above

#include <stdio.h>
#include <stddef.h>
#include <stdalign.h>
#include <stdbool.h>

// #include <stdint.h>

static const size_t N = 5;

int main() {
    size_t k = 0;
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; /* or int *ptr = &arr[0]; */ 
    
    for(k = 0; k < N; k++)
    {
        printf("\n\t%d", ptr[k]);
        /* or printf("\n\t%d", *(ptr + k)); */ 
        /* or printf("\n\t%d", *ptr++); */
    }

    // Pointer Substraction

    int *p = &arr[2];
    int *q = &arr[3];

    ptrdiff_t diff = q - p;

    printf("q - p = %ti\n", diff); /* Outputs "1". */
    printf("*(p + (q - p)) = %d\n", *(p + diff)); /* Outputs "4". */    

    printf("Alignment of char = %zu\n", alignof(char)); 
    printf("Alignment of max_align_t = %zu\n", alignof(max_align_t)); 
    printf("alignof(float[10]) = %zu\n", alignof(float[10])); 
    printf("alignof(struct{char c; int n;}) = %zu\n", alignof(struct {char c; int n;}));

    bool x = true;
    bool y = false;

    if (x)
    {
        puts("This will print!");
    }
    
    if (!y)
    {
        puts("This will also print");
    }

    return 0;
}