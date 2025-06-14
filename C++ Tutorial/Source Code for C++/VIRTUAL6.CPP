                             // Chapter 10 - Program 6 - VIRTUAL6.CPP
#include <iostream.h>

class vehicle 
{
   int wheels;
   float weight;
public:
   virtual void message(void) {cout << "Vehicle message\n";}
};


class car : public vehicle 
{
   int passenger_load;
public:
   void message(void) {cout << "Car message\n";}
};


class truck : public vehicle 
{
   int passenger_load;
   float payload;
public:
   int passengers(void) {return passenger_load;}
};


class boat : public vehicle 
{
   int passenger_load;
public:
   int passengers(void) {return passenger_load;}
   void message(void) {cout << "Boat message\n";}
};


int main()
{
vehicle *unicycle;

   unicycle = new vehicle;
   unicycle->message();
   delete unicycle;

   unicycle = new car;
   unicycle->message();
   delete unicycle;

   unicycle = new truck;
   unicycle->message();
   delete unicycle;

   unicycle = new boat;
   unicycle->message();
   delete unicycle;

   return 0;
}



// Result of execution
//
// Vehicle message
// Car message
// Vehicle message
// Boat message
