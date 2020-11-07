/*
   Given a string, strspn calculates the length of the initial substring (span) 
   consisting solely of a specific list of characters. strcspn is similar, 
   except it calculates the length of the initial substring consisting of any 
   characters except those listed:

   Analogous functions using wide-character strings are wcsspn and wcscspn; 
   they're used the same way.
*/

/*
   Provided a string of "tokens" delimited by "separators", print the tokens along with the token separators that get skipped.
*/

#include <stdio.h> 
#include <string.h>

int main(void)
{
   const char sepchars[] = ",.;!?";
   char foo[] = ";ball call,.fall gall hall!?.,"; char *s;
   int n;

   for (s = foo; *s != 0; /*empty*/) {
      /* Get the number of token separator characters. */ n = (int)strspn(s, sepchars);
      if (n > 0)
         printf("skipping separators: << %.*s >> (length=%d)\n", n, s, n);
      /* Actually skip the separators now. */
      s += n;

      /* Get the number of token (non-separator) characters. */
      n = (int)strcspn(s, sepchars);

      if (n > 0)
         printf("token found: << %.*s >> (length=%d)\n", n, s, n);

      /* Skip the token now. */
      s += n; 

   }
   printf("== token list exhausted ==\n"); 
   return 0;
}
