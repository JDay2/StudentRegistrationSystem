#include <iostream>
#include "userImp.cpp"
#include "CTRL_LOGIN.cpp"
#include "facultyMainPage_CTRL.cpp"
#include "studentMainPage_CTRL.cpp"

using namespace std;


int main(){

  string usercatch;
  login loginpage;

  user* current= loginpage.loginCtrl();
  
  //how to use object current
  usercatch=current->getUSN(); 
  cout << endl <<"username: " <<usercatch <<endl;

  if(current->getutype() == 0){
    cout<< "admin user"<<endl;
//    adminMainPage(current);
  } else if(current->getutype() == 1){
//    studentMainPage(current);
    cout<< "student user"<<endl;
    studentMainPage stu;
    stu.printOptions(current);
  } else if(current->getutype() ==2){
    facultyMainPage fac;
    fac.printOptions(current);
  }


  cout<<endl<<endl<<endl<<"EXITING SYSTEM"<<endl<<endl;
  //free the memory of the object
  delete current;
  cout << "Thank you for using our system" << endl;
  return 0;
}
