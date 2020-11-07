/*
 * =====================================================================================
 *
 *       Filename:  p1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/04/2020 21:54:10
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
#include <sqlite3.h>

int main(void) {

    sqlite3 *db;

    char *zErrMsg = 0;

    int rc;

    rc = sqlite3_open("mydb.db", &db);

    if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(db);

    return 0;
}
