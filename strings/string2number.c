/* Safely convert Strings to Number: strtoX functions */
/* Version >= C99 */
/* Since C99 the C library has a set of safe conversion 
   functions that interpret a string as a number. 
   Their names are of the form strtoX, where X is 
   one of l, ul, d, etc to determine the target 
   type of the conversion.

    double strtod(char const* p, char** endptr);
    long double strtold(char const* p, char** endptr);

    Don't use: atoi(), atof()  - Dangerous
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>

int main(int argc, char** argv)
{

    double ret = strtod(argv[1], 0); /* attempt conversion */
    /* check the conversion result. */

    if ((ret == HUGE_VAL || ret == -HUGE_VAL) && errno == ERANGE) 
        return 0; /* numeric overflow in in string */
    else if (ret == HUGE_VAL && errno == ERANGE) 
        return 0; /* numeric underflow in in string */
    /* At this point we know that everything went fine so ret may be used */

    printf("Number for %s is %f\n", argv[1], ret);

    /* 
       long strtol(char const* p, char** endptr, int nbase);
       long long strtoll(char const* p, char** endptr, int nbase);
       unsigned long strtoul(char const* p, char** endptr, int nbase); 
       unsigned long long strtoull(char const* p, char** endptr, int nbase);
    */

    long a= strtol("101", 0, 2); /* a = 5: */
    long b = strtol("101", 0, 8); /* b = 65L */
    long c = strtol("101", 0, 10); /* c = 101L */
    long d = strtol("101", 0, 16); /* d = 257L */
    long e = strtol("101", 0, 0); /* e = 101L */
    long f = strtol("0101", 0, 0 ); /* f = 65L */ 
    long g = strtol("0x101", 0, 0 ); /* g = 257L */

    printf("The string 101 base 2 = %lu\n", a);
    printf("The string 101 base 8 = %lu\n", b);
    printf("The string 101 base 10 = %lu\n", c);
    printf("The string 101 base 16 = %lu\n", d);
    printf("The string 101 base 0 = %lu\n", e);
    printf("The string 0101 base 0 = %lu\n", f);
    printf("The string x101 base 0 = %lu\n", g);

}
