                             /* Chapter 9 - Program 5 - STRINGIN.C */
#include <stdio.h>

int main()
{
char big[25];

   printf("Input a character string, up to 25 characters.\n");
   printf("An X in column 1 causes the program to stop.\n");

   do 
   {
      scanf("%s", big);
      printf("The string is -> %s\n", big);
   } while (big[0] != 'X');

   printf("End of program.\n");

   return 0;
}



/* Result of execution

Input a character string, up to 25 characters.
An X in column 1 causes the program to stop.

(The output depends on what you type in.)

End of program.

*/
