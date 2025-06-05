                              // Chapter 2 - Programming exercise 1
#include <iostream.h>

enum game_result {WIN, LOSE, TIE, CANCEL, FORFEIT};

void main()
{
game_result result;
enum game_result omit = CANCEL;
int index;

   for (index = WIN ; index <= FORFEIT ; index++) {
      result = (game_result)index;
      if (result == omit) 
         cout << "The game was cancelled\n";
      else {
         cout << "The game was played ";
         if (result == WIN)
            cout << "and we won!";
         if (result == LOSE)
            cout << "and we lost.";
         if (result == FORFEIT)
            cout << "and we won by forfeit.";
         cout << "\n";
      }
   }
}


// Result of execution
//
// The game was played and we won!
// The game was played and we lost.
// The game was played
// The game was cancelled
// The game was played and we won by forfeit.
