                              // Chapter 8 - Program 5 - INHERIT5.CPP
#include <iostream.h>

class vehicle 
{
protected:
   int wheels;
   double weight;
public:
   vehicle(void)               {wheels = 7;
                                weight = 11111.0;}
   vehicle(int in_wheels, double in_weight)
                               {wheels = in_wheels;
                                weight = in_weight;}
   void initialize(int in_wheels, double in_weight);
   int get_wheels(void)        {return wheels;}
   double get_weight(void)     {return weight;}
   double wheel_loading(void)  {return weight/wheels;}
};



class car : public vehicle 
{
   int passenger_load;
public:
   car(void)                   {passenger_load = 4;}
   car(int people, int in_wheels, double in_weight) :
                               vehicle(in_wheels, in_weight),
                               passenger_load(people)
                               { }
   void initialize(int in_wheels, double in_weight, int people = 4);
   int passengers(void)        {return passenger_load;}
};



class truck : public vehicle 
{
   int passenger_load;
   double payload;
public:
   truck(void)                 {passenger_load = 3;
                                payload = 22222.0;}
   truck(int people, double load, int in_wheels, double in_weight) :
                               vehicle(in_wheels, in_weight),
                               passenger_load(people),
                               payload(load)
                               { }
   void init_truck(int how_many = 2, double max_load = 24000.0);
   double efficiency(void);
   int passengers(void)        {return passenger_load;}
};



int main()
{
vehicle unicycle(1, 12.5);

// unicycle.initialize(1, 12.5);
   cout << "The unicycle has " <<
                                unicycle.get_wheels() << " wheel.\n";
   cout << "The unicycle's wheel loading is " <<
         unicycle.wheel_loading() << " pounds on the single tire.\n";
   cout << "The unicycle weighs " <<
                             unicycle.get_weight() << " pounds.\n\n";

car sedan(5, 4, 3500.0);

// sedan.initialize(4, 3500.0, 5);
   cout << "The sedan carries " << sedan.passengers() <<
                                                    " passengers.\n";
   cout << "The sedan weighs " << sedan.get_weight() << " pounds.\n";
   cout << "The sedan's wheel loading is " <<
                    sedan.wheel_loading() << " pounds per tire.\n\n";

truck semi(1, 33675.0, 18, 12500.0);

// semi.initialize(18, 12500.0);
// semi.init_truck(1, 33675.0);
   cout << "The semi weighs " << semi.get_weight() << " pounds.\n";
   cout << "The semi's efficiency is " <<
                          100.0 * semi.efficiency() << " percent.\n";

   return 0;
}



// initialize to any data desired
void vehicle::initialize(int in_wheels, double in_weight)
{
   wheels = in_wheels;
   weight = in_weight;
}



void car::initialize(int in_wheels, double in_weight, int people)
{
   passenger_load = people;
   wheels = in_wheels;
   weight = in_weight;
}



void truck::init_truck(int how_many, double max_load)
{
   passenger_load = how_many;
   payload = max_load;
}



double truck::efficiency(void)
{
   return payload / (payload + weight);
}



// Result of execution
//
// The unicycle has 1 wheel.
// The unicycle's wheel loading is 12.5 pounds on the single tire.
// The unicycle weighs 11111 pounds.
//
// The sedan carries 4 passengers.
// The sedan weighs 3500 pounds.
// The sedan's wheel loading is 875 pounds per tire.
//
// The semi weighs 12500 pounds.
// The semi's efficiency is 72.9291 percent.
