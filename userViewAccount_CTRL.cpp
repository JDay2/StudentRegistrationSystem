#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "user.h"

class userViewAccount()
{
  public:
  viewAccount(user*);

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
     
     }
   case 2:
     //faculty details
     cout<<"Would you like to modify? (Y/N)"<<endl;
   default:
   cout<<"problem with user initialization, shutting down"<<endl;
   exit(40);

   }


}
