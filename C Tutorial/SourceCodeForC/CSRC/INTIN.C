                                /* Chapter 9 - Program 4 - INTIN.C */
#include <stdio.h>

int main()
{
int valin;

   printf("Input a number from 0 to 32767, stop with 100.\n");

   do {
      scanf("%d", &valin);       /* read a single integer value in */
      printf("The value is %d\n", valin);
   } while (valin != 100);

   printf("End of program\n");

   return 0;
}



/* Result of execution

Input a number from 0 to 32767, stop with 100.

(The output depends on the numbers you type in.)

End of program

*/
