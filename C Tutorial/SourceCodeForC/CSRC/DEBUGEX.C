                              /* Chapter 6 - Program 5 - DEBUGEX.C */
#include <stdio.h>
#define MY_DEBUG

int main()
{
int index;
      
   for (index = 0 ; index < 6 ; index++) 
   {
      printf("Index is now %d", index);
      printf(" and we can process the data");
      printf("\n");
#ifdef MY_DEBUG
      printf("The processor is not debugged yet! *************\n");
#else
      for (count = 1 ; count < index * 5 ; counter++) 
      {
         value = (see page 16 of the documentation)
         limit = (ask Bill about this calculation)
                 Linda has a data table for the worst case analysis
         printf("count = %d, value = %d, limit = %d\n, 
                                               count, value, limitt);
      }
#endif      
   }

   return 0;
}
      
      
/* Result of execution

(As written with MY_DEBUG defined)

Index is now 0 and we can process the data
The processor is not debugged yet! *************
Index is now 1 and we can process the data
The processor is not debugged yet! *************
Index is now 2 and we can process the data
The processor is not debugged yet! *************
Index is now 3 and we can process the data
The processor is not debugged yet! *************
Index is now 4 and we can process the data
The processor is not debugged yet! *************
Index is now 5 and we can process the data
The processor is not debugged yet! *************

(Removing line 3, or commenting it out)

  (This program will not compile due to errors.)
  
*/
