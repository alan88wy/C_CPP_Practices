/*
 * =====================================================================================
 *
 *       Filename:  ptr.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/08/20 16:56:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
    int a = 20;
    int* prt_a = & a;

    cout << *prt_a << endl;
}
