                                 /* Chapter 6 - Program 6 - ENUM.C */
#include <stdio.h>

int main()
{
enum {WIN, TIE, BYE, LOSE, NO_SHOW} result;
enum {SUN, MON, TUE, WED, THU, FRI, SAT} days;

   result = WIN;
   printf("    WIN = %d\n", result);
   result = LOSE;
   printf("   LOSE = %d\n", result);
   result = TIE;
   printf("    TIE = %d\n", result);
   result = BYE;
   printf("    BYE = %d\n", result);
   result = NO_SHOW;
   printf("NO_SHOW = %d\n\n", result);

   for(days = MON ; days < FRI ; days++)
      printf("The day code is %d\n", days);

   return 0;
}



/* Result of execution
    WIN = 0
   LOSE = 3
    TIE = 1
    BYE = 2
NO SHOW = 4

The day code is 1
The day code is 2
The day code is 3
The day code is 4

*/
