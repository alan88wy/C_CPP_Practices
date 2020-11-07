/*
 * =====================================================================================
 *
 *       Filename:  ptr_array.c
 *
 *    Description: Pointers and Arrays 
 *
 *        Version:  1.0
 *        Created:  03/29/2020 17:34:55
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
#include <math.h>

double length(double *pt);

int main(void) {
    double point[3] = {0.0, 1.0, 2.0};

    printf("Length of point is %f\n", length(point));
}

double length(double *pt) {
    /*  an array decays to a pointer when passed to a subroutine. */

    return sqrt(pt[0]*pt[0] + pt[1] * pt[1] + pt[2] * pt[2]);
}
