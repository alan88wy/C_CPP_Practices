#include <stdio.h> 
#include <string.h>

int main(void)
{
    /* Always ensure that your string is large enough to contain the characters 
     * and a terminating NUL character ('\0')!
    */
    
    char mystring[10];
    /* Copy "foo" into `mystring`, until a NUL character is encountered. */

    strcpy(mystring, "foo"); 
    printf("%s\n", mystring);

    /* At this point, we used 4 chars of `mystring`, the 3 characters of "foo", 
    * and the NUL terminating byte.
    */

    /* Append "bar" to `mystring`. */
    strcat(mystring, "bar"); printf("%s\n", mystring);
    /* We now use 7 characters of `mystring`: "foo" requires 3, "bar" requires 3 
     * and there is a terminating NUL character ('\0') at the end.
    */

   /* Copy "bar" into `mystring`, overwriting the former contents. */

    strcpy(mystring, "bar"); 
    printf("%s\n", mystring);
    return 0; 
    }