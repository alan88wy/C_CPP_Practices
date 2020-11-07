/*
 * =====================================================================================
 *
 *       Filename:  read_fmt_str.c
 *
 *    Description: Read formatted data from string 
 *
 *        Version:  1.0
 *        Created:  12/10/19 22:17:52
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

int main(void) {
    char sentence[] = "date : 06-06-2019";
    char str[50];
    int year;
    int month;
    int day;

    sscanf(sentence, "%s : %2d-%2d-%4d", str, &day, &month, &year);
    printf("%s -> %02d-%02d-%04d\n", str, day, month, year);
    return 0;
}

