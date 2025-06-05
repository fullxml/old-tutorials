                             // Chapter 11 - Program 10 - APPFRAM2.CPP
#include "iostream.h"

// This is a very simple class
class CForm 
{
public:
   void display_form(void);
   virtual void header(void) { cout << "This is a header\n"; }
   virtual void body(void) = 0;    // Pure virtual function
   virtual void footer(void) { cout << "This is a footer\n\n"; }
};


void CForm::display_form(void)
{
   header();
   for (int index = 0 ; index < 3 ; index++)
   {
      body();
   }
   footer();
}


// This class overrides two of the virtual methods of the base class
class CMyForm : public CForm 
{
   void body(void) { cout << " This is the new body text\n"; }
   void footer(void) { cout << "This is the new footer\n"; }
};


int main()
{                            
// The next three lines of code are now illegal since CForm is now an
//  abstract type and an object cannot be created of that type.
// CForm *first_form = new CForm; 
//    first_form->display_form();   // A call to the base class
//    delete first_form;

CForm *first_form = new CMyForm;   // An object of the derived class
   first_form->display_form();     // A call to the derived class

   return 0;
}
 
 
// Result of execution
//
// This is a header
//  This is the new body text
//  This is the new body text
//  This is the new body text
// This is the new footer
