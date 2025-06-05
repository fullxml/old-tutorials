                               // Chapter 9 - Program 5 - USEDTTM.CPP
#include <iostream.h>
#include "datetime.h"

datetime now, birthday(10, 18, 1938,  1, 30, 17);
datetime       special( 2, 19, 1950, 13, 30,  0);

int main(void)
{

   cout << "Now = " << now.get_date_string() << " "
                    << now.get_time_string() << " and is day "
                    << now.get_day_of_year() << "\n";

   cout << "Birthday = " << birthday.get_date_string() << " "
                    << birthday.get_time_string() << " and is day "
                    << birthday.get_day_of_year() << "\n";

   cout << "Special = " << special.get_date_string() << " "
                    << special.get_time_string() << " and is day "
                    << special.get_day_of_year() << "\n";

   return 0;
}



// Result of execution

// Now = May 15, 1994 21:12:56 and is day 135
// Birthday = Oct 18, 1938  1:30:17 and is day 291
// Special = Feb 19, 1950 13:30:00 and is day 50
