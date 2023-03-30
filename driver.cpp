#include <iostream>
#include <stdio.h>
using namespace std;


int main(){

string username; //holds the username that the user entered (not validated and not to be used for searches)
string password; //holds the password that the user entered (not validated)
//do not use these variables past log in, use the functions for the user and subsequent classes

bool logout=false;  //system will continue to run as long as the user does not select log out
bool notLoggedIn=true;  //as long as true, the system will continue to ask user for login info
bool invalidLogIn=false;  //controls the ouput of an error message (if false-> no error message, if true->error)
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
    cin>>password;
    
    //here is where to put in the check for username and password
    //if either are wrong then raise the inavlidLogIn flag (change to true)
    //if both are good then lower the notLoggedIn flag (change to false)
    }






 }
  return 0;
}
