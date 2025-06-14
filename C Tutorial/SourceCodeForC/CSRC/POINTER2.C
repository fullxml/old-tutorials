                             /* Chapter 8 - Program 2 - POINTER2.C */
#include <stdio.h>
#include <string.h>

int main()
{
char strg[40], *there, one, two;
int  *pt, list[100], index;

   strcpy(strg, "This is a character string.");

   one = strg[0];                    /* one and two are identical */
   two = *strg;
   printf("The first output is %c %c\n", one, two);

   one = strg[8];                   /* one and two are indentical */
   two = *(strg+8);
   printf("The second output is %c %c\n", one, two);

   there = strg+10;          /* strg+10 is identical to &strg[10] */
   printf("The third output is %c\n", strg[10]);
   printf("The fourth output is %c\n", *there);

   for (index = 0 ; index < 100 ; index++)
      list[index] = index + 100;
   pt = list + 27;
   printf("The fifth output is %d\n", list[27]);
   printf("The sixth output is %d\n", *pt);

   return 0;
}



/* Result of execution

The first output is T T
The second output is a a
The third output is c
The fourth output is c
The fifth output is 127
The sixth output is 127

*/
