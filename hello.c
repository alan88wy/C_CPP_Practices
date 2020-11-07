#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <limits.h>

void bit_pattern(int u)
{
	int i, x, word;
	unsigned mask = 1;

	word = CHAR_BIT * sizeof(int);
	mask = mask << (word - 1);
	for(i = 1; i <= word; i++)
	{
		x = (u & mask) ? 1 : 0;
		printf("%d", x);
		mask >>= 1;
	}
	printf("\n");
}

int main(void)
{
    char* a;
	int i=1;
	char* *b = &a; // b point to a
	uint64_t i64 = -65;
 	// strcpy(a, "Welcome to my C program");
	a = "Welcome to my C program";
	puts("Hello World\n");
	puts(a);
	a = "I love my C program";
	// puts("value of a " + a);
	puts(*b); // Print what ever b is pointed to
	(i == 1)?  puts("eval i = 1") : puts("eval i != 1");
	printf("value of i = %d\n", i);
	printf("Value of CHAR_BIT : %d\n", CHAR_BIT);
	printf("Size of Int : %lu\n", sizeof(int));
	printf("Size of word : %lu\n", CHAR_BIT * sizeof(int) - 1);
	bit_pattern(40);

	int x = 42, y = 42;
	printf("%i\n", (x *=2, y));

	int sumk, k;

	for (sumk=1, k =1; k < 50; k++, sumk++)
	{
		printf("%5d%5d\n", k, sumk);
	}

	return 0;
}
