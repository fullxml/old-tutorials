                               /* Chapter 3 - Program 4 - IFELSE.C */
/* This is an example of the if and the if-else statements         */

#include <stdio.h>

int main()
{
int data;

   for(data = 0 ; data < 10 ; data = data + 1) 
   {
      if (data == 2)
         printf("Data is now equal to %d\n", data);

      if (data < 5)
         printf("Data is now %d, which is less than 5\n", data);
      else
         printf("Data is now %d, which is greater than 4\n", data);

   }  /* end of for loop */

   return 0;
}



/* Result of execution

Data is now 0, which is less than 5
Data is now 1, which is less than 5
Data is now equal to 2
Data is now 2, which is less than 5
Data is now 3, which is less than 5
Data is now 4, which is less than 5
Data is now 5, which is greater than 4
Data is now 6, which is greater than 4
Data is now 7, which is greater than 4
Data is now 8, which is greater than 4
Data is now 9, which is greater than 4

*/
