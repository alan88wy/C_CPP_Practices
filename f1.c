/*
 * =====================================================================================
 *
 *       Filename:  f1.c
 *
 *    Description: 
 *
 *        Version:  1.0
 *        Created:  02/22/2020 21:17:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int locateFirstChar(char *str, char ch);

int main()
{
    char str[40], ch, *p;

    printf("Enter a string: \n");
    fgets(str, 90, stdin);

    if (p==strchr(str, '\n')) *p = '\0';

    printf("Enter the target character: \n");
    scanf("%c", &ch);

    printf("Length : %lu\n", strlen(str));
    printf("last: %c\n", str[strlen(str)-2]);
    printf("locateFirstChar() : %d\n", locateFirstChar(str, ch));

    return 0;

}

int locateFirstChar(char *str, char ch)
{

 int k=-1;

 for (int i=0; i < strlen(str); i++)
 {
     if (str[i] == ch)
     {
         k = i;
         break;
     }
 }

 return k;
 
}
