#ifndef user_H
#define user_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

//abbrieviations:
//SMP- student main page
//FMP - faculty main page

class user
{
  public:

   string getUSN();  //gets username
   bool checkPassword(string, string);    //checks password
   void setUSN(string);  //sets username
   void setPWD(string);  //sets password
  private:
   string USN;       //8 characters, first initial then last name up to   
   string password;  //in the control class, can check and control length of password
   string fname;   // string containing the user's first name
   string lname;   // string containing the user's last name
   int uType; //0 for admin, student, professor
   int uType; //0 for admin, 1 for student, 2 for professor
};

#endif
