#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "user.h"

using namespace std;

string user::getUSN()
{
   return USN;
}

string user::getfname()
{
   return fname;
}

string user::getlname()
{
   return lname;
}

int user::getutype()
{

return utype;
}


bool user::checkPassword(string passwordIn)
{
   bool check = false;
   if(password == passwordIn)
   {
       check = true;
   }
   return check;
}

void user::setUSN(string usnIn)
{
   USN = usnIn;
}

void user::setPWD(string pwdIn)
{
   password = pwdIn;
}

user::user()
{
   USN = "jdoe";
   password = "password";
   fname = "John";
   lname = "Doe";
}

user::user(string usnIn, string passwordIn, string fnameIn, string lnameIn, int utypeIn)
{

   USN = usnIn;
   password = passwordIn;
   fname = fnameIn;
   lname = lnameIn;
   utype = utypeIn;
}
