                             /* Chapter 3 - Program 8 - TEMPCONV.C */
/****************************************************************/
/*                                                              */
/*     This is a temperature conversion program written in      */
/*      the C programming language. This program generates      */
/*      and displays a table of fahrenheit and centigrade       */
/*      temperatures, and lists the freezing and boiling        */
/*      of water.                                               */
/*                                                              */
/****************************************************************/

#include <stdio.h>

int main()
{
int count;        /* a loop control variable               */
int fahrenheit;   /* the temperature in fahrenheit degrees */
int centigrade;   /* the temperature in centigrade degrees */

   printf("Centigrade to Fahrenheit temperature table\n\n");

   for(count = -2 ; count <= 12 ; count = count + 1)
   {
      centigrade = 10 * count;
      fahrenheit = 32 + (centigrade * 9) / 5;
      printf("  C =%4d   F =%4d  ", centigrade, fahrenheit);

      if (centigrade == 0)
         printf(" Freezing point of water");
      if (centigrade == 100)
         printf(" Boiling point of water");

      printf("\n");
   } /* end of for loop */

   return 0;
}



/* Result of execution

Centigrade to Fahrenheit temperature table

   C = -20   F =   -4
   C = -10   F =   14
   C =   0   F =   32   Freezing point of water
   C =  10   F =   50
   C =  20   F =   68
   C =  30   F =   86
   C =  40   F =  104
   C =  50   F =  122
   C =  60   F =  140
   C =  70   F =  158
   C =  80   F =  176
   C =  90   F =  194
   C = 100   F =  212   Boiling point of water
   C = 110   F =  230
   C = 120   F =  248

*/
