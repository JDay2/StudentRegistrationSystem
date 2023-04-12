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
  callAppropriate(pass); 


}


void facultyMainPage::callAppropriate(int selection)
{
   
  switch(selection){

    case 1:
      //view current courses ctrl class call

    case 2:
      //view previous courses ctrl class call

    case 3:
      //View account control class call
    
    case 4:
      //shut down sustem

    default:
    cout<<"Selection not avaliable"<<endl;
 
  }




}
