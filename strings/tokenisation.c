#include <stdio.h> 
#include <string.h>

int main(void)
{
    int toknum = 0;
    char src[] = "Hello,, world! Welcome     to my world of C programming.";
    char *tokenArray[strlen(src)];  /* Array of String */
    const char delimiters[] = ", !.";
    char *token = strtok(src, delimiters); 
    
    while (token != NULL)
    {
        tokenArray[toknum] = token;
        printf("%d: [%s]\n", ++toknum, token);
        /*
        Calls to strtok to continue tokenizing the same source s
        tring should not pass the source string again, 
        but instead pass NULL as the first argument. 
        If the same source string is passed then the first 
        token will instead be re-tokenized. That is, 
        given the same delimiters, strtok would simply return 
        the first token again.
        */
        token = strtok(NULL, delimiters); 
        
    }

    printf("Printing token again :");

    int i = 0;

    while(tokenArray[i]) {
        printf("%s\n", tokenArray[i]);
        i++;
    }
    
    printf("%zu\n", sizeof(tokenArray)/sizeof(tokenArray[0]));

    /* source is now "Hello\0, world\0\0" */
    /* strtok is neither thread safe nor re-entrant because 
    it uses a static buffer while parsing. This means that if 
    a function calls strtok, no function that it calls while 
    it is using strtok can also use strtok, and it cannot be 
    called by any function that is itself using strtok.
    */
}
