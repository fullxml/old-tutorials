                             // Chapter 11 - Program 9 - APPFRAM1.CPP
#include "iostream.h"

// This is a very simple class
class CForm 
{
public:
   void display_form(void);
   virtual void header(void) { cout << "This is a header\n"; }
   virtual void body(void)   { cout << " This is body text\n"; }
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
   void header(void) { cout << "This is the new header\n"; }
   void footer(void) { cout << "This is the new footer\n"; }
};


int main()
{
CForm *first_form = new CForm;
 
   first_form->display_form();   // A call to the base class

   delete first_form;
   first_form = new CMyForm;
   first_form->display_form();   // A call to the derived class

   return 0;
}
 
 
// Result of execution
//
// This is a header
//  This is body text
//  This is body text
//  This is body text
// This is a footer
//
// This is the new header
//  This is body text
//  This is body text
//  This is body text
// This is the new footer
