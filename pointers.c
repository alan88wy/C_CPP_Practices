#include <stdio.h>

int main(void)
{
    int var = 27;  // Must declare a variable first and assign to pointer. Otherwise, segmentation error 11
    int* pc = &var;
    int* kc = &var;

    *pc = 27;

    // pc = &c;

    printf("%d\n", *pc);  // Ouptut: 1
    printf("%d\n", *kc);    // Output: 1

    *pc += 27;
    *kc = *kc + 27;

    printf("%d\n", *pc);  // Ouptut: 1
    printf("%d\n", *kc);    // Output: 1

    return 0;
}
