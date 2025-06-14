                             /* Chapter 11 - Program 1 - STRUCT1.C */
#include <stdio.h>

struct 
{
   char initial;     /* last name initial      */
   int  age;         /* childs age             */
   int  grade;       /* childs grade in school */
} boy, girl;


int main()
{
   boy.initial = 'R';
   boy.age = 15;
   boy.grade = 75;

   girl.age = boy.age - 1;  /* she is one year younger */
   girl.grade = 82;
   girl.initial = 'H';

   printf("%c is %d years old and got a grade of %d\n",
                                 girl.initial, girl.age, girl.grade);

   printf("%c is %d years old and got a grade of %d\n",
                                    boy.initial, boy.age, boy.grade);

   return 0;
}



/* Result of execution

H is 14 years old and got a grade of 82
R is 15 years old and got a grade of 75

*/
