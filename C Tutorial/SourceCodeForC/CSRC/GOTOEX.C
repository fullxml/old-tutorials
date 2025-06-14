                              /* Chapter 3 - Program 7  - GOTOEX.C */
#include <stdio.h>

int main()
{
int dog, cat, pig;

   goto real_start;

   some_where:
   printf("This is another line of the mess.\n");
   goto stop_it;

/* the following section is the only section with a useable goto */
   real_start:
   for(dog = 1 ; dog < 6 ; dog = dog + 1) 
   {
      for(cat = 1 ; cat < 6 ; cat = cat + 1) 
      {
         for(pig = 1 ; pig < 4 ; pig = pig + 1) 
         {
            printf("Dog = %d  Cat = %d  Pig = %d\n", dog, cat, pig);
            if ((dog + cat + pig) > 8 ) goto enough;
         };
      };
   };
   enough: printf("Those are enough animals for now.\n");
/* this is the end of the section with a useable goto statement */

   printf("\nThis is the first line out of the spaghetti code.\n");
   goto there;

   where:
   printf("This is the third line of spaghetti.\n");
   goto some_where;

   there:
   printf("This is the second line of the spaghetti code.\n");
   goto where;

   stop_it:
   printf("This is the last line of this mess.\n");

   return 0;
}



/* Result of execution

Dog = 1  Cat = 1  Pig = 1
Dog = 1  Cat = 1  Pig = 2
Dog = 1  Cat = 1  Pig = 3
Dog = 1  Cat = 2  Pig = 1
Dog = 1  Cat = 2  Pig = 2
Dog = 1  Cat = 2  Pig = 3
Dog = 1  Cat = 3  Pig = 1
Dog = 1  Cat = 3  Pig = 2
Dog = 1  Cat = 3  Pig = 3
Dog = 1  Cat = 4  Pig = 1
Dog = 1  Cat = 4  Pig = 2
Dog = 1  Cat = 4  Pig = 3
Dog = 1  Cat = 5  Pig = 1
Dog = 1  Cat = 5  Pig = 2
Dog = 1  Cat = 5  Pig = 3
Those are enough animals for now.

This is the first line out of the spaghetti code.
This is the second line of the spaghetti code.
This is the third line of spaghetti.
This is another line of the mess.
This is the last line of this mess.

*/
