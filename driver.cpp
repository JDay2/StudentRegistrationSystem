#include <iostream>
#include "userImp.cpp"
#include "CTRL_LOGIN.cpp"

using namespace std;


int main(){

  string usercatch;
  login loginpage;

  user* current= loginpage.loginCtrl();
  
  //how to use object current
  usercatch=current->getUSN(); 
  cout << endl <<"username: " <<usercatch <<endl;


  //free the memory of the object
  delete current;

  return 0;
}
