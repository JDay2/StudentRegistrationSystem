#ifndef student_H
#define student_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "user.h"

using namespace std;

class student: public user
{
   private:
      string department; // stores the faculty member's department

   public:
      void viewSections(); // prints the sections a faculty member is assigned to
      void viewRoster(string); // prints the roster of a specified course

      student(); // default constructor
      student(string, string, string, string); // parameterized constructor
};

#endif
