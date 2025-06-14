                                /* Chapter 5 - Program 4 - SCOPE.C */
#include <stdio.h>      /* Prototypes for Input/Output             */
void head1(void);       /* Prototype for head1                     */
void head2(void);       /* Prototype for head2                     */
void head3(void);       /* Prototype for head3                     */

int count;              /* This is a global variable               */

int main()
{
register int index; /* This variable is available only in main */

   head1();
   head2();
   head3();
                      /* main "for" loop of this program */
   for (index = 8 ; index > 0 ; index--) 
   {
      int stuff;      /* This var is only available in these braces*/
      for (stuff = 0 ; stuff <= 6 ; stuff++)
         printf("%d ", stuff);
      printf(" index is now %d\n", index);
   }

   return 0;
}


int counter;      /* This is available from this point on */
void head1(void)
{
int index;        /* This variable is available only in head1 */

   index = 23;
   printf("The header1 value is %d\n", index);
}


void head2(void)
{
int count;  /* This variable is available only in head2 */
            /* and it displaces the global of the same name */

   count = 53;
   printf("The header2 value is %d\n", count);
   counter = 77;
}


void head3(void)
{
   printf("The header3 value is %d\n", counter);
}




/* Result of execution

The header1 value is 23
The header2 value is 53
The header3 value is 77
0 1 2 3 4 5 6  index is now 8
0 1 2 3 4 5 6  index is now 7
0 1 2 3 4 5 6  index is now 6
0 1 2 3 4 5 6  index is now 5
0 1 2 3 4 5 6  index is now 4
0 1 2 3 4 5 6  index is now 3
0 1 2 3 4 5 6  index is now 2
0 1 2 3 4 5 6  index is now 1

*/
