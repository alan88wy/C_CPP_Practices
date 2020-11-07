/*
 * =====================================================================================
 *
 *       Filename:  strArray.c
 *
 *    Description: when we assign string literals to char *, the strings themselves are allocated in read-only memory. However, the array string_array is allocated in read/write memory. This means that we can modify the pointers in the array, but we cannot modify the strings they point to.  
 *
 *        Version:  1.0
 *        Created:  12/10/19 22:06:05
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

int main(void) {
    char * str_array[] = {
        "foo", "bar", "baz
    }

    char mod_array[][4] = {
        "foo", "bar", "baz
    }

    /* The above is equivalent to 
     * char mod_array[][4] = {       
     *  {'f', 'o', 'o', '\0'},
     *  {'b', 'a', 'r', '\0'},
     *  {'b', 'a', 'z', '\0'}
     * };
     */


}

