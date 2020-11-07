/*
 * =====================================================================================
 *
 *       Filename:  struct01.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  02/28/2020 22:23:19
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
    struct person {
        char name[20];
        int age;
    };

    struct person man[3] = {{"alan", 30}, {"Jo", 24}, {"John", 25}};
    struct person *p;

    p = man;

    printf("name : %-10s Age : %d\n", p->name, p[0].age);
    printf("name : %-10s Age : %d\n", (p+1)->name, p[1].age);
    printf("name : %-10s Age : %d\n", p[2].name, (p+2)->age);

}
