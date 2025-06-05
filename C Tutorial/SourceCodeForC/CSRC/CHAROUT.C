                             /* Chapter 10 - Program 2 - CHAROUT.C */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
FILE *point;
char others[35];
int  indexer, count;

   strcpy(others, "Additional lines.");
   point = fopen("tenlines.txt", "a");     /* open for appending   */
   if (point == NULL)
   {
      printf("File failed to open\n");
      exit (EXIT_FAILURE);
   }

   for (count = 1 ; count <= 10 ; count++) 
   {
      for (indexer = 0 ; others[indexer] ; indexer++)
         putc(others[indexer], point);     /* output one character */
      putc('\n', point);                   /* output a linefeed    */
   }
   fclose(point);

   return EXIT_SUCCESS;
}



/* Result of output (appended to TENLINES.TXT)

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
