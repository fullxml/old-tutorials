                               // Chapter 6 - Program 12 - PHRASE.INL

#include <string.h>
                              
inline phrase::phrase(void)
{
   strcpy(noun, "");
   strcpy(verb, "");
   strcpy(full_phrase, "(No text yet)");
}

inline void phrase::set_noun(char *in_noun)
{
   strcpy(noun, in_noun);
}

inline void phrase::set_verb(char *in_verb)
{
   strcpy(verb, in_verb);
}

inline char *phrase::get_phrase(void)
{
   strcpy(full_phrase, verb);
   strcat(full_phrase, " the ");
   strcat(full_phrase, noun);
   return full_phrase;
}



// Result of execution
//
// (This file cannot be executed)
                               
