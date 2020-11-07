/* use sprintf function to write float data to string. */

#include <stdio.h>
int main () {

    /*  Write formatted data to string
        int sprintf ( char * str, const char * format, ... ); 
        use sprintf function to write float data to string.
    */
    char buffer [50];
    double PI = 3.1415926;
    sprintf (buffer, "PI = %.7f", PI); 
    printf ("%s\n",buffer);

    /* Read formatted data from string
        int sscanf ( const char * s, const char * format, ...); 
        use sscanffunction to parse formatted data.
    */

    char sentence []="date : 06-06-2012"; 
    char str [50];
    int year;
    int month;
    int day;
    sscanf (sentence,"%s : %2d-%2d-%4d", str, &day, &month, &year); 
    printf ("%s -> %02d-%02d-%4d\n",str, day, month, year);


    return 0;
}