                            /* Chapter 10 - Program 3 - READCHAR.C */
#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *funny;
int c;

   funny = fopen("TENLINES.TXT", "r");

   if (funny == NULL) 
   {
      printf("File doesn't exist\n");
      exit (EXIT_FAILURE);
   } 
   else 
   {
      do 
      {
         c = getc(funny);    /* get one character from the file */
         putchar(c);         /* display it on the monitor       */
      } while (c != EOF);    /* repeat until EOF (end of file)  */
   }
   fclose(funny);

   return EXIT_SUCCESS;
}



/* Result of execution

This is an example line.  Line number 1
This is an example line.  Line number 2
This is an example line.  Line number 3
This is an example line.  Line number 4
This is an example line.  Line number 5
This is an example line.  Line number 6
This is an example line.  Line number 7
This is an example line.  Line number 8
This is an example line.  Line number 9
This is an example line.  Line number 10
Additional lines.
Additional lines.
Additional lines.
Additional lines.
Additional lines.
Additional lines.
Additional lines.
Additional lines.
Additional lines.
Additional lines.

*/
