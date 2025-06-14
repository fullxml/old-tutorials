                             /* Chapter 12 - Program 2 - BIGDYNL.C */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct animal 
{
   char name[25];
   char breed[25];
   int  age;
} *pet[12], *point;   /* this defines 13 pointers, no variables    */


int main()
{
int index;

      /* first, fill the dynamic structures with nonsense          */
   for (index = 0 ; index < 12 ; index++) 
   {
      pet[index] = (struct animal *)malloc(sizeof(struct animal));
      if (pet[index] == NULL)
      {
         printf("Memory allocation failed\n");
         exit (EXIT_FAILURE);
      }

      strcpy(pet[index]->name, "General");
      strcpy(pet[index]->breed, "Mixed Breed");
      pet[index]->age = 4;
   }

   pet[4]->age = 12;           /* these lines are simply to        */
   pet[5]->age = 15;           /*      put some nonsense data into */
   pet[6]->age = 10;           /*            a few of the fields.  */

       /* now print out the data described above                   */

   for (index = 0 ; index < 12 ; index++) 
   {
      point = pet[index];
      printf("%s is a %s, and is %d years old.\n", 
                              point->name, point->breed, point->age);
   }

       /* good programming practice dictates that we free up the   */
       /* dynamically allocated space before we quit.              */

   for (index = 0 ; index < 12 ; index++)
      free(pet[index]);

   return EXIT_SUCCESS;
}



/* Result of execution

General is a Mixed Breed, and is 4 years old.
General is a Mixed Breed, and is 4 years old.
General is a Mixed Breed, and is 4 years old.
General is a Mixed Breed, and is 4 years old.
General is a Mixed Breed, and is 12 years old.
General is a Mixed Breed, and is 15 years old.
General is a Mixed Breed, and is 10 years old.
General is a Mixed Breed, and is 4 years old.
General is a Mixed Breed, and is 4 years old.
General is a Mixed Breed, and is 4 years old.
General is a Mixed Breed, and is 4 years old.
General is a Mixed Breed, and is 4 years old.

*/
