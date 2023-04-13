#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>



using namespace std;

class facultyMainPage{

  public:

  void printOptions(user*);

  private:
  void callAppropriate(int selection);


}




void facultyMainPage::printOptions(user*){

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
}


void facultyMainPage::callAppropriate(int selection)
{
   
  switch(selection){

    case 1:
      //view current courses ctrl class call

    case 2:
      //view previous courses ctrl class call

    case 3:
      
    case 4:
      //shut down sustem

    default:
    cout<<"Selection not avaliable"<<endl;
 
  }




}
