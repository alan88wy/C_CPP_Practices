/*
 * =====================================================================================
 *
 *       Filename:  find_str.c
 *
 *    Description: The strchr and strrchr functions find a character in a string, that is in a NUL-terminated character array. strchr return a pointer to the first occurrence and strrchr to the last one. 
 *
 *        Version:  1.0
 *        Created:  12/10/19 22:33:18
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

int main(int argc, char *argv[]) {
    char toSearchFor = 'A';

    /* Exit if no second argument is found. */

    if (argc != 2) {
        printf("Argument missing \n");
                return EXIT_FAILURE;
    }

    {
        char *firstOcc = strchr(argv[1], toSearchFor);
        if (firstOcc != NULL) {
            printf("First Position of %c in %s is %td. \n", 
                    toSearchFor, argv[1], firstOcc - argv[1]); /* A pointer difference's result 
                                                                is a signed integer and uses the length modifier 't'. */

        }
        else 
        {
            printf("%c is not in %s.\n", toSearchFor, argv[1]);
        }
    }

    {
        char *lastOcc = strrchr(argv[1], toSearchFor);

        if (lastOcc != NULL) {
            printf("Last position of %c in %s is %td.\n",
                    toSearchFor, argv[1], lastOcc - argv[1]);
        }
    }

    return EXIT_SUCCESS;
}

