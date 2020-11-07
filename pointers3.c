#include <stdio.h>

int main(void)
{
    static const char *name[] = {"zero", "one", "two", "three"};

    printf("%s\n", name[0]);

    printf("%lu\n", sizeof(*name));

    printf("%s\n", *(name)); //name[0]

    printf("%s\n", *(name+1)); //name[1]

}