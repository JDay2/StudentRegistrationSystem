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
   bool checkPassword(string);    //checks password
   void setUSN(string);  //sets username
   void setPWD(string);  //sets password
   user();               //default constructor
   user(string, string, string, string);               //parameterized constructor

  private:
   string USN;       //8 characters, first initial then last name up to   
   string password;  //in the control class, can check and control length of password
   string fname;   // string containing the user's first name
   string lname;   // string containing the user's last name
};

#endif
