#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "faculty.h"

using namespace std;

void faculty::viewSections()
{
}

void faculty::viewRoster(string requestedSection)
{
}

faculty::faculty()
{
   // If a faculty member is instantiated without assignement, their properties are shown as "Unassigned"
   department = "Unassigned";
   for(int i = 0; i < 4; i++)
   {
      section[i] = "Unassigned";
   }
}

faculty::faculty(string usnIn, string passwordIn, string fnameIn, string lnameIn, int uTypeIn, string departmentIn, string sectionIn[4]): user(usnIn, passwordIn, fnameIn, lnameIn, uTypeIn)
{
   // Set faculty values equal to faculty inputs
   department = departmentIn;
   for(int i = 0; i < 4; i++)
   {
      section[i] = sectionIn[i];
   }
}
