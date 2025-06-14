                               /* Chapter 3 - Program 6 - SWITCH.C */
#include <stdio.h>

int main()
{
int truck;

   for (truck = 3 ; truck < 13 ; truck = truck + 1) 
   {

      switch (truck) 
      {
         case 3  : printf("The value is three\n");
                   break;
         case 4  : printf("The value is four\n");
                   break;
         case 5  :
         case 6  :
         case 7  :
         case 8  : printf("The value is between 5 and 8\n");
                   break;
         case 11 : printf("The value is eleven\n");
                   break;
         default : printf("It is one of the undefined values\n");
                   break;
      } /* end of switch */
   } /* end of for loop */

   return 0;
}



/* Result of execution

The value is three
The value is four
The value is between 5 and 8
The value is between 5 and 8
The value is between 5 and 8
The value is between 5 and 8
It is one of the undefined values
It is one of the undefined values
The value is eleven
It is one of the undefined values

*/
