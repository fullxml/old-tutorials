//       XXXXX  X      X   X    X    X   X    X    X   X
//       X      X      X   X   X X   X   X   X X   X   X
//       X      X       X X   X   X  X   X  X   X   X X
//       XXX    X        X    X   X  X   X  X   X    X
//       X      X        X    XXXXX  X X X  XXXXX    X
//       X      X        X    X   X  X X X  X   X    X
//       X      XXXXX    X    X   X   X X   X   X    X

//                    FLYAWAY - version 2.80
//          Written by: Gordon Dodrill - Oct 18, 1996
//      Copywrite 1989, 1990, 1992, 1994, 1996 - Coronado Enterprises

#include "words.h"
#include "map.h"
#include "schedule.h"
#include "clock.h"
#include "items.h"

words    input_words;      // The player's command inputs
map      airport;          // The physical layout of the airport
schedule flight_info;      // Schedule and gate information
clock    time_of_day;      // The system timekeeper
items    personal_items;   // Things the player carries with him

int main()
{
   airport.initialize();
   do 
   {
      input_words.get_command();        // Get user inputs
      flight_info.shuffle_flights();    // Until monitor read
      flight_info.shuffle_gates();      // Until ticket read
      airport.perform_action();         // Try to perform the request
      flight_info.check_flight();       // Did you get there?
   } while (input_words.get_verb() != quit);

   return 0;
}
