                             // Chapter 6 - Program 14 - USEPHRAS.CPP

#include <iostream.h>
#include "phrase.h"

int main()
{
phrase my_text;

   cout << "The phrase is ---> " << my_text.get_phrase() << "\n";
   my_text.set_noun("baseball");
   cout << "The phrase is ---> " << my_text.get_phrase() << "\n";
   my_text.set_verb("Throw");
   cout << "The phrase is ---> " << my_text.get_phrase() << "\n";
   my_text.set_noun("game");
   cout << "The phrase is ---> " << my_text.get_phrase() << "\n";

   return 0;
}



// Result of execution
//
// The phrase is --->  the
// The phrase is --->  the baseball
// The phrase is ---> Throw the baseball
// The phrase is ---> Throw the game
