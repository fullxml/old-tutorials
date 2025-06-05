                            /* Chapter 10 - Program 8 - PRINTDAT.C */
#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *funny, *printer;
int c;

   funny = fopen("TENLINES.TXT", "r");   /* open input file        */
   if (funny == NULL)
   {
      printf("File failed to open\n");
      exit (EXIT_FAILURE);
   }

   printer = fopen("PRN", "w");          /* open printer file      */
   if (printer == NULL)
   {
      printf("Printer not available for use\n");
      exit (EXIT_FAILURE);
   }

   do 
   {
      c = getc(funny);       /* get one character from the file    */
      if (c != EOF) 
      {
         putchar(c);         /* display it on the monitor          */
         putc(c, printer);   /* print the character                */
      }
   } while (c != EOF);       /* repeat until EOF (end of file)     */

   fclose(funny);
   fclose(printer);

   return 0;
}



/* Result of execution

(The file named TENLINES.TXT is listed
            on the printer, and it is listed on the monitor.)

*/
