                            /* Chapter 10 - Program 5 - READGOOD.C */
#include <stdio.h>

int main()
{
FILE *fp1;
char oneword[100];
int c;

   fp1 = fopen("TENLINES.TXT", "r");

   do 
   {
      c = fscanf(fp1, "%s", oneword); /* get one word from file    */
      if (c != EOF)
         printf("%s\n", oneword);     /* display it on the monitor */
   } while (c != EOF);                /* repeat until EOF          */

   fclose(fp1);

   return 0;
}



/* Result of execution

This
is
an
example
line.
Line
number
1
This
is
 ... (Many other lines.) ...
Additional
lines.
Additional
lines.

*/
