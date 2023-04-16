#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "faculty.h"

using namespace std;

void faculty::viewSections()
{
}

void faculty::set(string u, string p, string fn, string ln)
{
  setUSN(u);
  setPWD(p);
  setfname(fn);
  setlname(ln);
}

void faculty::viewRoster(string requestedSection)
{
}

faculty::faculty()
{
}

faculty::faculty(string usnIn, string passwordIn, string fnameIn, string lnameIn, int utypeIn): user(usnIn, passwordIn, fnameIn, lnameIn, utypeIn)
{
   // Set faculty values equal to faculty inputs
}
