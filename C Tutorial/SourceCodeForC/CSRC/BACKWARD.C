                             /* Chapter 5 - Program 6 - BACKWARD.C */
#include <stdio.h>       /* Prototypes for standard Input/Output   */
#include <string.h>      /* Prototypes for string operations       */

void forward_and_backwards(char line_of_char[], int index);

int main()
{
char line_of_char[80];
int index = 0;

   strcpy(line_of_char, "This is a string.\n");

   forward_and_backwards(line_of_char, index);

   return 0;
}


void forward_and_backwards(char line_of_char[], int index)
{
   if (line_of_char[index]) 
   {
      printf("%c", line_of_char[index]);
      index++;
      forward_and_backwards(line_of_char, index);
   }
   printf("%c", line_of_char[index]);
}




/* Result of execution

This is a string.

.gnirts a si sih

*/
