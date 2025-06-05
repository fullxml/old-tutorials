                            /* Chapter 13 - Program 2 - CHARCLAS.C */
#include <stdio.h>
#include <ctype.h>       /* Note - your compiler may not need this */

void count_the_data(char line[]);


int main()
{
FILE *fp;
char line[80], filename[24];
char *c;

   printf("Enter filename -> ");
   scanf("%s", filename);
   fp = fopen(filename, "r");

   do 
   {
      c = fgets(line, 80, fp);   /* get a line of text */
      if (c != NULL) 
      {
         count_the_data(line);
      }
   } while (c != NULL);

   fclose(fp);

   return 0;
}


void count_the_data(char line[])
{
int whites, chars, digits;
int index;

   whites = chars = digits = 0;

   for (index = 0 ; line[index] != 0 ; index++) 
   {
      if (isalpha(line[index]))   /* 1 if line[] is alphabetic  */
          chars++;
      if (isdigit(line[index]))   /* 1 if line[] is a digit     */
          digits++;
      if (isspace(line[index]))   /* 1 if line[] is blank, tab, */
          whites++;               /*           or newline       */
   }   /* end of counting loop */

   printf("%3d%3d%3d %s", whites, chars, digits, line);
}



/* Result of execution (This is a portion of the output, but the
          comments have been removed to allow this section to be
          included as one large comment.  This output assumes that
          CHARCLAS.C is selected as the input file.)

 37 23  3 
  2 13  0 #include <stdio.h>
 18 43  0 #include <ctype.h>
  1  0  0 
  3 24  0 void count_the_data(char line[]);
  1  0  0
  2  7  0 int main()
  1  0  0 {
  2  6  0 FILE *fp;
  3 16  4 char line[80], filename[24];
  2  5  0 char *c;
     (This pattern continues for the rest of the file)
*/
