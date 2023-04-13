#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "user.h"
#include <fstream>

//NEEDS ERROR CHECKING
class userViewAccount()
{
  public:
  void viewAccount(user*);

  private:
  void modifyAccount(user*);

}

void userViewAccount::viewAccount(user*)
{

   current= user*;
   char answer='N';
   switch(current->getutype()){
   
   case 0:
     //admin details
     cout<<"Would you like to modify? (Y/N)"<<endl;
   case 1:
     cout<<"username: "<<current->getUSN()<<endl;
     cout<<"first name: "<<current->getfname()<<endl;
     cout<<"last name: "<<current->getlname()<<endl;
     cout<<"Would you like to modify? (Y/N)"<<endl;
     cin>>answer;

     if(answer=='Y'){
       modifyAccount(current);
     }
   case 2:
     //faculty details
     cout<<"Would you like to modify? (Y/N)"<<endl;
   default:
   cout<<"problem with user initialization, shutting down"<<endl;
   exit(40);

   }


}


void userViewAccount::modifyAccount(user*)
{
  current=user*;
 
  string filename = "users.txt"
  string search_string;
  search_string = current->getUSN();
    
  ifstream infile(filename);
  ofstream outfile(filename + ".tmp");
  string line;
  while (getline(infile, line)) {
      if (line.find(search_string) == string::npos) {
          outfile << line << endl;
      }
  }
  infile.close();
  outfile.close();
  remove(filename.c_str());
  rename((filename + ".tmp").c_str(), filename.c_str());


 
  cout<<endl<<"Please enter first name: ";
}
