#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include "passwordHider.cpp"


using namespace std;

class login
{
  public:
   void loginCtrl();
  private:
};


void login::loginCtrl(){
  string username; //holds the username that the user entered (not validated and not to be used for searches)
  string password; //holds the password that the user entered (not validated)
  //do not use these variables past log in, use the functions for the user and subsequent classes

  bool logout=false;  //system will continue to run as long as the user does not select log out
  bool notLoggedIn=true;  //as long as true, the system will continue to ask user for login info
  bool invalidLogIn=false; 
  //controls the ouput of an error message (if false-> no error message, if true->error)
  //lets the user know that they entered invalid login info 



  //will run unti the user selects logout
  while(logout!=true){
    printf("Welcome to the student registration system! \n");

	   
    while(notLoggedIn){  //will run until the user enters valid log in info
       if(invalidLogIn){ //if the flag is raised that means that they entered invalid login and throws an error msg
         printf("Invalid username and/or password) \n");
    }
      printf("LOGIN \n");
   
      printf("Username: ");
      cin>>username;

      printf("\nPassword: ");
      SetStdinEcho(false);  //this hides the password as the user types it is
      cin>>password;
      SetStdinEcho(true);  //changes it back to showing what the user types in    


      ifstream file("users.txt");
      if (file.is_open()) {
          string line;
          while (getline(file, line)) {
              // parse the line
              string user, pass, num, first, last;
              stringstream ss(line);
              ss >> user >> pass >> num >> first >> last;
              if (user == username && pass == password) {
                  notLoggedIn=false;
                  
                  cout << "Number: " << num << endl;
                  cout << "First name: " << first << endl;
                  cout << "Last name: " << last << endl;
              }
         }
         invalidLogIn=true;
         cout << "Invalid username or password." << endl;
     } else {
       cout << "Unable to open file." << endl;
     }


  }


 }
}
