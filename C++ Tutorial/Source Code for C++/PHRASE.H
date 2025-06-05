                                 // Chapter 6 - Program 11 - PHRASE.H
#ifndef PHRASE_H
#define PHRASE_H

class phrase 
{  
   char verb[10];
   char noun[10];
   static char full_phrase[25];
public:
   inline phrase(void);
   inline void set_noun(char *in_noun);
   inline void set_verb(char *in_verb);
   inline char *get_phrase(void);   
};

#include "phrase.inl"

#endif



// Result of execution
//
// (This file cannot be executed)
