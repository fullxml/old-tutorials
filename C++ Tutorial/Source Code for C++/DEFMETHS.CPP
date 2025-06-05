                             // Chapter 6 - Program 10 - DEFMETHS.CPP
#include <iostream.h>
#include <string.h>
#include <stdlib.h>
                            
class defaults 
{
   int size;         // A simple stored value
   char *string;     // A name for the stored data
public:
      // This overrides the default constructor
   defaults(void);
   
      // This overrides the default copy constructor
   defaults(defaults &in_object);
      
      // This overrides the default assignment operator
   defaults &operator=(defaults &in_object);
      
      // This destructor should be required with dynamic allocation
   ~defaults(void);
      
      // And finally, a couple of ordinary methods
   void set_data(int in_size, char *in_string);
   void get_data(char *out_string);
};

defaults::defaults(void)
{
   size = 0;
   string = new char[2];
   strcpy(string, "");
}

defaults::defaults(defaults &in_object)
{
   size = in_object.size;
   string = new char[strlen(in_object.string) + 1];
   strcpy(string, in_object.string);
}

defaults &defaults::operator=(defaults &in_object)
{
   delete [] string;
   size = in_object.size;
   string = new char[strlen(in_object.string) + 1];
   strcpy(string, in_object.string);
   return *this;
}

defaults::~defaults(void)
{
   delete [] string;
}

void defaults::set_data(int in_size, char *in_string)
{
   size = in_size;
   delete [] string;
   string = new char[strlen(in_string) + 1];
   strcpy(string, in_string);
}                                             



void defaults::get_data(char *out_string)
{
char temp[10];

   strcpy(out_string, string);
   strcat(out_string, " = ");
   _itoa(size, temp, 10);
   strcat(out_string, temp);
}

int main()
{
char buffer[80];
defaults my_data;

   my_data.set_data(8, "hat size");
   my_data.get_data(buffer);
   cout << buffer << "\n\n";

defaults more_data(my_data);
   more_data.set_data(12, "shoe size");
   my_data.get_data(buffer);
   cout << buffer << "\n";
   more_data.get_data(buffer);
   cout << buffer << "\n";

   my_data = more_data;
   my_data.get_data(buffer);
   cout << buffer << "\n";
   more_data.get_data(buffer);
   cout << buffer << "\n";

   return 0;
}
 
 

// Result of execution
//
// hat size = 8
//
// hat size = 8
// shoe size = 12
//
// shoe size = 12
// shoe size = 12
