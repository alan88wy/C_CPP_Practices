/*
 * =====================================================================================
 *
 *       Filename:  fmt_str.c
 *
 *    Description: use sprintf function to write float data to string. 
 *
 *        Version:  1.0
 *        Created:  12/10/19 22:15:38
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
    char buffer[50];
    double PI = 3.1415926;

    sprintf(buffer, "PI = %0.7f", PI);

    printf("%s\n", buffer);

    return 0;

}

