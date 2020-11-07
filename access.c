#include <stdio.h>

int myFunction(int x, int y)
{
    return x * 2 + y;
}

int main(void)
{
    struct MyStruct
    {
        int x;
        int y;
    };

    struct MyStruct myObject;

    myObject.x = 42;
    myObject.y = 123;

    printf(".x = %i, .y = %d\n", myObject.x, myObject.y);

    struct MyStruct *p = &myObject;

    printf(".x = %i, .y = %d\n", p ->x, p->y);
    printf(".x = %i, .y = %d\n", myObject.x, myObject.y);

    // Address of

    int z = 3;
    int *q = &z;

    printf("%p = %p\n", (void *)&z, (void *) q);  /* Outputs "A = A", for some implementation-defined A. */

    // Dereference

    printf("z = %d, *q = %d\n", z, *q);
    *q = 123;
    printf("z = %d, *q = %d\n", z, *q);

    int arr[] = {1,2,3,4,5};
    printf("arr[2] = %i\n", arr[2]);
    printf("*(arr+2) = %i\n", *(arr+2));
    printf("2[arr] = %i\n", 2[arr]);

    // Sizeof Operator

    printf("Size of Int = %zu\n", sizeof(int));

    // Cast Operator

    int x = 3;
    int y = 4;

    printf("%f\n", (double)x / y);

    // Function Call Operator

    int (*fn)(int, int) = &myFunction;

    int a = 42;
    int b = 123;

    printf("(*fn)(%i ,%i) = %i\n", a, b, (*fn)(a,b)); /* Outputs "fn(42, 123) = 207". */

    printf("fn(%i, %i) = %i\n", a, b, fn(a, b)); /* Another form: you don't need to dereference explicitly */


    return 0;
}