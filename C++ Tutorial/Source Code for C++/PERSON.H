                                 // Chapter 11 - Program 1 - PERSON.H
#ifndef PERSON_H
#define PERSON_H

class person 
{
protected:    // Make these variables available to the subclasses
   char name[25];
   int salary;
public:
   virtual void display(void);
};

#endif
