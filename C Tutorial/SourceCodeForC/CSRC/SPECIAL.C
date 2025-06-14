                              /* Chapter 9 - Program 7 - SPECIAL.C */
#include <stdio.h>
#include <stdlib.h>      /* Prototype for exit()                   */

int main()
{
int index;

   for (index = 0 ; index < 6 ; index++) {
      printf("This line goes to the standard output.\n");
      fprintf(stderr, "This line goes to the error device.\n");
   }

   exit(4);  /* This can be tested with the DOS errorlevel
                command in a batch file. The number returned
                is used as follows;

                IF ERRORLEVEL 4 GOTO FOUR
                (continue here if less than 4)
                .
                .
                GOTO DONE
                :FOUR
                (continue here if 4 or greater)
                .
                .
                :DONE
             */
}



/* Result of execution (without redirection)

This line goes to the standard output.
This line goes to the error device.
This line goes to the standard output.
This line goes to the error device.
This line goes to the standard output.
This line goes to the error device.
This line goes to the standard output.
This line goes to the error device.
This line goes to the standard output.
This line goes to the error device.
This line goes to the standard output.
This line goes to the error device.

*/
