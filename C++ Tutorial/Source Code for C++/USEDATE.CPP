                              // Chapter 5 - Program 12 - USEDATE.CPP
// This is a very limited test of the date class

#include <iostream.h>
#include "date.h"

int main(void)
{
date today, birthday;

   birthday.set_date(7, 21, 1960);
   cout << "Limited test of the date class\n";
   cout << "Today is " << today.get_date_string() << "\n";
   cout << "Birthday is " << birthday.get_date_string() << "\n";

   today.set_date_format(4);
   cout << "Today is " << today.get_date_string() << "\n";
   cout << "Birthday is " << birthday.get_date_string() << "\n";

   return 0;
}


// Result of execution

// Limited test of the date class
// Today is May 15, 1994
// Birthday is Jul 21, 1960
// Today is 15 May 1994
// Birthday is 21 Jul 1960
