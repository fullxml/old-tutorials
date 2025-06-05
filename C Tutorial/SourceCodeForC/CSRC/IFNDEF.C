                               /* Chapter 6 - Program 4 - IFNDEF.C */
#include <stdio.h>

#define OPTION_1       /* This defines the preprocessor control    */
#define PRINT_DATA     /* If this is defined, we will print        */

#ifndef OPTION_1
   int count_1 = 17;   /* This exists if OPTION_1 is not defined   */
#endif

int main()
{
int index;
      
#ifndef PRINT_DATA
   printf("No results will be printed with this version of "
                " the program IFNDEF.C\n");
#endif

   for (index = 0 ; index < 6 ; index++) 
   {
#ifdef PRINT_DATA
      printf("In the loop, index = %d", index);
#ifndef OPTION_1
      printf(" count_1 = %d", count_1);  /* This may be printed     */
#endif
      printf("\n");
#endif
   }

   return 0;
}
      
      
/* Result of execution

(As written with OPTION_1 defined)

In the loop, index = 0
In the loop, index = 1
In the loop, index = 2
In the loop, index = 3
In the loop, index = 4
In the loop, index = 5

(Removing line 4, or commenting it out)

In the loop, index = 0 count_1 = 17
In the loop, index = 1 count_1 = 17
In the loop, index = 2 count_1 = 17
In the loop, index = 3 count_1 = 17
In the loop, index = 4 count_1 = 17
In the loop, index = 5 count_1 = 17

*/
