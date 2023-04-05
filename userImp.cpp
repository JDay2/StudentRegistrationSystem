#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <"user.h">

using namespace std;

string user::getUSN()
{
   return USN;
}

bool user::checkPassword(string passwordIn)
{
   bool success = false;
   if(PWD == passwordIn)
   {
      success = true;
   }
   return success;
}

void user::setUSN(string usnIn)
{
   USN = usnIn;
}

void user::setPWD(string pwdIn)
{
   PWD = pwdIn;
}

user::user()
{
   USN = "jdoe";
   password = "password";
   fname = "John";
   lname = "Doe";
   uType = 1;
}

user::user(string usnIn, string passwordIn, string fnameIn, string lnameIn, int uTypeIn)
{
   // Ensure the user type is a 0, 1, or 2, default to 1 (student) if invalid range
   if(uTypeIn != 0 || uTypeIn != 1 || uType != 2)
   {
      uTypeIn = 1;
   }

   USN = usnIn;
   password = passwordIn;
   fname = fnameIn;
   lname = lnameIn;
   uType = uTypeIn;
}
