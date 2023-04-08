#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "admin.h"

using namespace std;

void admin::viewSections()
{
}

void admin::viewRoster(string requestedSection)
{
}

admin::admin()
{
   // If a faculty member is instantiated without assignement, their properties are shown as "Unassigned"
}

admin::admin(string usnIn, string passwordIn, string fnameIn, string lnameIn): user(usnIn, passwordIn, fnameIn, lnameIn)
{
   // Set faculty values equal to faculty inputs
}
