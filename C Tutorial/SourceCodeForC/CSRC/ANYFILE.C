                             /* Chapter 10 - Program 7 - ANYFILE.C */
#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp1;
char oneword[100], filename[25];
char *c;

   printf("Enter filename -> ");
   scanf("%s", filename);            /* read the desired filename  */
   fp1 = fopen(filename, "r");
   if (fp1 == NULL)
   {
      printf("File failed to open\n");
      exit (EXIT_FAILURE);
   }

   do 
   {
      c = fgets(oneword, 100, fp1);  /* get one line from the file */
      if (c != NULL)                
         printf("%s", oneword);      /* display it on the monitor  */
   } while (c != NULL);              /* repeat until NULL          */

   fclose(fp1);

   return EXIT_SUCCESS;
}



/* Result of execution

(The file selected is listed on the monitor)

*/
