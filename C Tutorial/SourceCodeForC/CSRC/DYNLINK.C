                             /* Chapter 12 - Program 3 - DYNLINK.C */
#include <stdio.h>        /* this is needed to define the NULL     */
#include <string.h>
#include <stdlib.h>
#define RECORDS 6


struct animal 
{
   char name[25];        /* The animals name                       */
   char breed[25];       /* The type of animal                     */
   int  age;             /* The animals age                        */
   struct animal *next;  /* pointer to another struct of this type */
} *point, *start, *prior; /* this defines 3 pointers, no variables */

int index;


int main()
{
      /* the first record is always a special case                 */
   start = (struct animal *)malloc(sizeof(struct animal));
   if (start == NULL)
   {
      printf("Memory allocation failed\n");
      exit (EXIT_FAILURE);
   }

   strcpy(start->name, "General");
   strcpy(start->breed, "Mixed Breed");
   start->age = 4;
   start->next = NULL;
   prior = start;

      /* a loop can be used to fill in the rest once it is started */
   for (index = 0 ; index < RECORDS ; index++) 
   {
      point = (struct animal *)malloc(sizeof(struct animal));
      if (point == NULL)
      {
         printf("Memory allocation failed\n");
         exit (EXIT_FAILURE);
      }

      strcpy(point->name, "Frank");
      strcpy(point->breed, "Laborador Retriever");
      point->age = 3;
      prior->next = point;  /* point last "next" to this record    */
      point->next = NULL;   /* point this "next" to NULL           */
      prior = point;        /* this is now the prior record        */
   }

      /* now print out the data described above                    */
   point = start;
   do 
   {
      prior = point->next;
      printf("%s is a %s, and is %d years old.\n",
                              point->name, point->breed, point->age);
      point = point->next;
   } while (prior != NULL);

      /* good programming practice dictates that we free up the    */
      /* dynamically allocated space before we quit.               */

   point = start;            /* first block of group               */
   do 
   {
      prior = point->next;   /* next block of data                 */
      free(point);           /* free present block                 */
      point = prior;         /* point to next                      */
   } while (prior != NULL);  /* quit when next is NULL             */

   return EXIT_SUCCESS;
}



/* Result of execution

General is a Mixed Breed, and is 4 years old.
Frank is a Laborador Retriever, and is 3 years old.
Frank is a Laborador Retriever, and is 3 years old.
Frank is a Laborador Retriever, and is 3 years old.
Frank is a Laborador Retriever, and is 3 years old.
Frank is a Laborador Retriever, and is 3 years old.
Frank is a Laborador Retriever, and is 3 years old.

*/
