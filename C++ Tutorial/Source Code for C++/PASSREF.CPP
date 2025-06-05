                               // Chapter 4 - Program 3 - PASSREF.CPP
#include <iostream.h>
#include <stdio.h>

void fiddle(int in1, int &in2);

int main()
{
int count = 7, index = 12;

   cout << "The values are ";
   printf("%3d %3d\n", count, index);

   fiddle(count, index);

   cout << "The values are ";
   printf("%3d %3d\n", count, index);

   return 0;
}

void fiddle(int in1, int &in2)
{
   in1 = in1 + 100;
   in2 = in2 + 100;
   cout << "The values are ";
   printf("%3d %3d\n", in1, in2);
}



// Result of execution
//
// The values are    7  12
// The values are  107 112
// The values are    7 112

