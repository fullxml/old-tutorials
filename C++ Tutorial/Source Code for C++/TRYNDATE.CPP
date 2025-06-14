                             // Chapter 7 - Program 11 - TRYNDATE.CPP
#include <iostream.h>
#include "newdate.h"

int main(void)
{
new_date now, later, birthday;

   later.set_date(12, 31, 1991);
   birthday.set_date(2, 19, 1991);

   cout << "Today is day " << now.get_day_of_year() << "\n";
   cout << "Dec 31 is day " << later.get_day_of_year() << "\n";
   cout << "Feb 19 is day " << birthday.get_day_of_year() << "\n";

   return 0;
}


// Result of execution

// Today is day 135
// Dec 31 is day 365
// Feb 19 is day 50
