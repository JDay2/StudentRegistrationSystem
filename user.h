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
   int getutype(); //returns utype
   string getUSN();  //gets username
   bool checkPassword(string);    //checks password
   void setUSN(string);  //sets username
   void setPWD(string);  //sets password
   string getfname();   //returns first name 
   string getlname();  //returns last name 
   user();               //default constructor
   user(string, string, string, string,int);               //parameterized constructor

  private:
   string USN;       //8 characters, first initial then last name up to   
   string password;  //in the control class, can check and control length of password
   string fname;   // string containing the user's first name
   string lname;   // string containing the user's last name
   int utype; //0 is admin, 1 student, 2 faculty
};

#endif
