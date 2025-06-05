                                /* Chapter 6 - Program 3 - IFDEF.C */
#include <stdio.h>

#define OPTION_1       /* This defines the preprocessor control    */

#ifdef OPTION_1
   int count_1 = 17;   /* This exists only if OPTION_1 is defined  */
#endif

int main()
{
int index;

   for (index = 0 ; index < 6 ; index++) 
   {
      printf("In the loop, index = %d", index);
#ifdef OPTION_1
      printf(" count_1 = %d", count_1);  /* This may be printed     */
#endif
      printf("\n");
   }

   return 0;
}
      
#undef OPTION_1



/* Result of execution

(As written with OPTION_1 defined)

In the loop, index = 0 count_1 = 17
In the loop, index = 1 count_1 = 17
In the loop, index = 2 count_1 = 17
In the loop, index = 3 count_1 = 17
In the loop, index = 4 count_1 = 17
In the loop, index = 5 count_1 = 17

(Removing line 4, or commenting it out)

In the loop, index = 0
In the loop, index = 1
In the loop, index = 2
In the loop, index = 3
In the loop, index = 4
In the loop, index = 5

*/
