                              /* Chapter 11 - Program 8 - STYLE3.H */
/* STYLE3.H - Style illustration file                              */
/* copyright - Coronado Enterprises - 1996                         */

/* This program does nothing useful as far as being an executable  */
/*  program.  It is intended to be simply a guide to style.  It is */
/*  assumed that there are other files that will be used with this */
/*  since other information is included here.                      */

#define START 2
#define MAX_ID 2564
#define CLASSIFICATION_1 12
#define CLASSIFICATION_2 17
#define CLASSIFICATION_3 20
#define LINE_LENGTH      25

struct person 
{
   char name[LINE_LENGTH];
   int  age;
   char status;        /* M = married, S = single */
};


struct alldat 
{
   int grade;
   struct person descrip;
   char lunch[LINE_LENGTH];
};


struct tuition 
{
   int years_resident;
   int hours_completed;
   float scholarship_amount;
   float total_tuition;
};


   /* Function prototypes for all functions                        */
float get_tuition(int student_number);
float get_arrears(int student_number, struct tuition student_info);
void  print_data(int student_number, int key_code);
float get_gpa(int student_number);
