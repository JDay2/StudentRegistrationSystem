#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "student.h"

using namespace std;


student::student()
{
   // If a faculty member is instantiated without assignement, their properties are shown as "Unassigned"
}

student::student(string usnIn, string passwordIn, string fnameIn, string lnameIn, int utypeIn): user(usnIn, passwordIn, fnameIn, lnameIn,utypeIn)
{
}
