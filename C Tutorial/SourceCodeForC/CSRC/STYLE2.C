                               /* Chapter 5 - Program 8 - STYLE2.C */
/* STYLE2.C - Style illustration file                              */
/* copyright - Coronado Enterprises - 1996                         */

/* This program does nothing useful as far as being an executable  */
/*  program.  It is intended to be simply a guide to style.  There */
/*  are many ways to format a function, and this is intended to    */
/*  give the student some illustrations of formatting the user     */
/*  interface.  Four functions are given, each with different      */
/*  definition styles.                                             */

/* Note that each of the following functions are meaningless since */
/*  they really do nothing useful other than to act as examples.   */

#include <stdio.h>

   /* A main program is included simply to make it a complete C    */
   /*  program, even though none ofthe functions are called.       */
int main()
{
   return 0;
}


   
/* Example 1 - A very simple definition.                           */
   
/* This function computes the area of any circle when given the    */
/*  radius.  It is dimensionless - the result is in the same units */
/*  as the input radius.                                           */
float area_of_circle(float radius)
{
   return 3.14159 * radius * radius;
}



/* Example 2 - A simple definition with parameter definitions.     */

/* This function computes the number of bricks required to build a */
/*  wall of the given dimensions.                                  */
int bricks_reqd(           /* Return value = number required       */
           int height,     /* Height of the wall                   */
           int width,      /* Width of the wall                    */
           int coverage)   /* Number of bricks to cover one square */
                           /*  foot of the wall                    */
{
float total;

   total = height * width * coverage;
   return (int)total;
}


           
/* Example 3 - A full header with parameter definitions            */

/* bricks_required
 *
 * This function computes the number of bricks required to build a
 *  wall of the given dimensions.
 *
 * Input parameters
 *  height        The height of the desired wall
 *  width         The width of the desired wall
 *  coverage      The number of bricks required to cover one 
 *                 square foot with the selected bricks
 *
 * Return value
 *  int           The number of bricks required
 */
int bricks_required(float height, float width, float coverage)
{
float total;

   total = height * width * coverage;
   return (int)total;
}
                                         


/* Example 4 - A full header for a trivial functions               */

/* header
 *
 * This function prints a header for each page
 *
 * Input parameters
 *  none
 *
 * Return value
 *  none
 */
        
void header()
{
   printf("The is the header for each page of the output\n");
}
