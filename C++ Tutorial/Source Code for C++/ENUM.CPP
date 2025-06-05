                                  // Chapter 2 - Program 1 - ENUM.CPP
#include <iostream.h>

enum game_result {WIN, LOSE, TIE, CANCEL};

int main()
{
game_result result;
enum game_result omit = CANCEL;
int count;

   for (count = WIN ; count <= CANCEL ; count++) 
   {
      result = (game_result)count;
      if (result == omit)
      { 
         cout << "The game was cancelled\n";
      }
      else 
      {
         cout << "The game was played ";
         if (result == WIN)
            cout << "and we won!";
         if (result == LOSE)
            cout << "and we lost.";
         cout << "\n";
      }
   }

   return 0;
}




// Result of execution
//
// The game was played and we won!
// The game was played and we lost.
// The game was played
// The game was cancelled

