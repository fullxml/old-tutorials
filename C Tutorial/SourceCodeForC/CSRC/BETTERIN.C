                             /* Chapter 9 - Program 3 - BETTERIN.C */
#include <stdio.h>
#include <conio.h>
#define CR 13       /* this defines CR to be 13 */
#define LF 10       /* this defines LF to be 10 */

int main()
{
int c;

   printf("Input any characters, hit X to stop.\n");

   do 
   {
      c = _getch();                  /* get a character            */
      putchar(c);                    /* display the hit key        */
      if (c == CR) putchar(LF);      /* if it is a carriage return */
                                     /*  put out a linefeed too    */
   } while (c != 'X');

   printf("\nEnd of program.\n");

   return 0;
}



/* Result of execution

Input any characters, hit X to stop.

(The output depends on what characters you enter.)

End of program.

*/
