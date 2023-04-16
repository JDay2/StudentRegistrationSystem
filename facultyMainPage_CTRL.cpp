#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>
#include "userViewAccount_CTRL.cpp"

using namespace std;

class facultyMainPage
{

  public:

  void printOptions(user*);

  private:
  void callAppropriate(int selection,user*);


};




void facultyMainPage::printOptions(user* passedUser){

<<<<<<< HEAD
  user* current=passedUser;
  bool notSelected = true;
  int pass=0;
  //need to keep prompting user until a valid input is given
  cout<<"Welcome "<<current->getfname()<<" to the student registration system!"<<endl;

  cout<<"Faculty Main Page"<<endl;

  cout<<"1. View Current Courses"<<endl;
  cout<<"2. View Previous Courses"<<endl;
  cout<<"3. View Account"<<endl;
  cout<<"4. Logout"<<endl;

  cout<<"Enter selection 1-4:";
  cin>>pass;
  callAppropriate(pass,current); 


=======
  current=user*;
  bool logoutNotSelected = true;
  
  // loops infinitely until a user selects logout, ensuring user is able to perform as many actions as they want during a session
  while(logoutNotSelected == true)
  {
    cout<<"Welcome "<<current->getfname()<<" to the student registration system!"<<endl;
    cout<<"Faculty Main Page"<<endl;

    cout<<"1. View Current Courses"<<endl;
    cout<<"2. View Previous Courses"<<endl;
    cout<<"3. View Account"<<endl;
    cout<<"4. Logout"<<endl;
    
    int pass = 0;
    bool validSelection = false; 
    // loops to check to ensure valid user input
    while(validSelection == false)
    {
      cout<<"Enter selection 1-4:";
      cin>>pass;

      if(pass == 1 || pass == 2 || pass == 3 || pass == 4)
      {
        validSelection == true;
        callAppropriate(pass);
        if(pass == 4)
        {
          logoutNotSelected = false;
        }
      } 
     
      else
      {
        cout << "Invalid input, please enter a value 1-4." << endl;
      }
    }
  }
>>>>>>> 5db600a957551e32ab4bd6ba3e993a0a65734fc9
}


void facultyMainPage::callAppropriate(int selection, user* current)
{
   
  switch(selection){

    case 1:
      //view current courses ctrl class call

    case 2:
      //view previous courses ctrl class call

    case 3:
      userViewAccount hold;
      hold.viewAccount(current);
    case 4:
      //shut down sustem

    default:
    cout<<"Selection not avaliable"<<endl;
 
  }

}
