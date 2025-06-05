#include <iostream.h>
#include "clock.h"



clock::clock(void)
{
   hour = 8;
   minute = 51;
}




void clock::inc_and_print_time(void)
{
   minute++;            // Add one minute to the time
   if (minute > 59) 
   {
      minute -= 60;
      hour++;
   }

                        // Output the user prompt
   cout << "\n      It is now " << hour << ":"; 
   if (minute < 10)
   {
      cout << "0";
   }
   cout << minute << "am, what do you wish to do?     ";   
}
