                              /* Chapter 11 - Program 9 - STYLE3.C */
/* STYLE3.C - Style illustration file                              */
/* copyright - Coronado Enterprises - 1996                         */

/* The only purpose for this program is to illustrate a typical    */
/*  style that can be used in any application.                     */

#include <string.h>
#include "style3.h"

int main()
{
struct alldat student[53];
struct alldat teacher, sub;

   teacher.grade = 94;
   teacher.descrip.age = 34;
   teacher.descrip.status = 'M';
   strcpy(teacher.descrip.name, "Mary Smith");
   strcpy(teacher.lunch, "Baloney sandwich");

   sub.descrip.age = 87;
   sub.descrip.status = 'M';
   strcpy(sub.descrip.name, "Old Lady Brown");
   sub.grade = 73;
   strcpy(sub.lunch, "Yogurt and toast");

   student[1].descrip.age = 15;
   student[1].descrip.status = 'S';
   strcpy(student[1].descrip.name, "Billy Boston");
   strcpy(student[1].lunch, "Peanut Butter");
   student[1].grade = 77;

   student[7].descrip.age = 14;
   student[12].grade = 87;

   return 0;
}



/* Result of execution

(There is no output from this program)

*/
