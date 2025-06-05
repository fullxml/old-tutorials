                              /* Chapter 5 - Program 2 - SQUARES.C */
#include <stdio.h>

int main()  /* This is the main program */
{
int x, y;

   for(x = 0 ; x < 8 ; x++) 
   {
      y = squ(x);  /* go get the value of x*x */
      printf("The square of %d is %d\n", x, y);
   }

   for (x = 0 ; x < 8 ; ++x)
      printf("The square of %d is %d\n", x, squ(x));

   return 0;
}

squ(input)  /* function to get the value of "input" squared */
int input;
{
int square;

   square = input * input;
   return(square);  /* This sets squ() = square */
}



/* Result of execution

The square of 0 is 0
The square of 1 is 1
The square of 2 is 4
The square of 3 is 9
The square of 4 is 16
The square of 5 is 25
The square of 6 is 36
The square of 7 is 49
The square of 0 is 0
The square of 1 is 1
The square of 2 is 4
The square of 3 is 9
The square of 4 is 16
The square of 5 is 25
The square of 6 is 36
The square of 7 is 49

*/
