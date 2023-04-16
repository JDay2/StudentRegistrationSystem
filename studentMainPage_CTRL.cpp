#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>



using namespace std;

class studentMainPage{

  public:

  void printOptions(user*);

  private:
  void callAppropriate(int selection);
}

void studentMainPage::printOptions(user*){

  current=user*;
  bool logoutNotSelected = true;
  
  // loops infinitely until a user selects logout, ensuring user is able to perform as many actions as they want during a session
  while(logoutNotSelected == true)
  {
    cout<<"Welcome "<<current->getfname()<<" to the student registration system!"<<endl;
    cout<<"Student Main Page"<<endl;
    cout<<"1. View Current Courses"<<endl;
    cout<<"2. View Previous Courses"<<endl;
    cout<<"3. View Account"<<endl;
    cout<<"4. View Current Grades"<<endl;
    cout<<"5. View Previous Grades"<<endl;
    cout<<"6. View Transcript"<<endl;
    cout<<"7. Register for Courses"<<endl;
    cout<<"8. Logout"<<endl;
    
    int pass = 0;
    bool validSelection = false; 
    // loops to check to ensure valid user input
    while(validSelection == false)
    {
      cout<<"Enter selection 1-8:";
      cin>>pass;

      if(pass == 1 || pass == 2 || pass == 3 || pass == 4 || pass == 5 || pass == 6 || pass == 7 || pass == 8)
      {
        validSelection == true;
        callAppropriate(pass);
        if(pass == 8)
        {
          logoutNotSelected = false;
        }
      } 
     
      else
      {
        cout << "Invalid input, please enter a value 1-8." << endl;
      }
    }
  }
}


void studentMainPage::callAppropriate(int selection)
{
   
  switch(selection){

    case 1:
      //view current courses ctrl class call

    case 2:
      //view previous courses ctrl class call

    case 3:

    case 4:

    case 5:

    case 6:

    case 7:
      
    case 8:
      //shut down sustem

    default:
    cout<<"Selection not avaliable"<<endl;
 
  }




}
