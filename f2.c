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

int longWordLength(char *str);

int main()
{
    char str[40], *p;

    printf("Enter a string: \n");
    fgets(str, 90, stdin);

    if (p==strchr(str, '\n')) *p = '\0';

    printf("Length of str : %lu\n", strlen(str));
    printf("last: %c\n", str[strlen(str)-2]);
    printf("longWordLength() : %d\n", longWordLength(str));

    return 0;

}

int longWordLength(char *str)
{

 int max=0;
 int s = 0;
 char word[40];

 for (int i=0; i < strlen(str); i++)
 {
     if (str[i] == ' ')
     {
        if (max < s) {
            max = s;
        }
        s = 0;
        word[0] = '\0';
     } else {
       word[s] = str[i];
       s++;
     }
 }

 if (max < s-1) {
    max = s-1;
 }

 return max;
 
}
