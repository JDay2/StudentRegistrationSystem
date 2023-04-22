#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <fstream>

//NEEDS ERROR CHECKING
class userViewCourses
{
  public:
  void viewCurrentCourses(user*);
  void viewPreviousCourses(user*);
};

void userViewCourses::viewCurrentCourses(user* passeduser)
{
  user* current=passeduser;
  int userTypeHold = current->getutype();
  
  if(userTypeHold==2){
     string filename = "facultyCurrentCourses.txt";
     string search_string;
     search_string = current->getUSN();

     ifstream infile(filename);
     string line;
     while (getline(infile, line)) {
         if (line.find(search_string) != string::npos) {
             cout << line << endl;
         }
     }
     infile.close();
  // This is for the student user
  } else if(userTypeHold==1){

        ifstream file("studentCurrentCourses.txt"); // open the file
        string line;

        if (file.is_open()) { // check if file is open
           string lines[100]; // declare an array to store the lines
           int count = 0;

           string search_string; // string variable to search for username
           search_string = current->getUSN(); // Set the variable to the username
           
           if (file.is_open()) { // check if file is open
              while (getline(file, lines[count])) { // read lines and store them in the array
                  if (lines[count].find(search_string) != string::npos) {
                     count++;
                     cout << count << ": " << lines[count-1] <<endl;
                  }
              }
              file.close(); // close the file

              int selection; // Variable to hold what the user selects
	      bool flag = true; // Variable to know if the user selected a proper selection
              char yn = 'y';
              while (flag){
                 cout << "Enter the line number of the class you want to view grades for: ";
                 cin >> selection; // get the line of the class the user wants to view grades for
                 cout << endl;
                    if(selection < count + 1) { // checks to see if the user input works
                       cout << "You selected: " << lines[selection-1] << endl; // outputs what line the user selected
                       string filename = "courseGrades.txt"; // searches this file
                       string search_string; // variable to store username
                       search_string = current->getUSN(); // setting the variable to the username of the user

                       ifstream infile(filename); // opens the file to search
                       string line; // variable to store whole line
                       while (getline(infile, line)) { // while loop to print everything in the file
                          if (line.find(search_string) != string::npos) { // if statement to only print the lines that the usn is in
                             cout << line << endl; // output the line
                          }
                       }
                       infile.close(); // close the file
                       flag = false; // exit the while loop
                       cout << endl;
                    } else { // in case the user enters incorrect input to the line number
                       cout << "Please enter a line number: " << endl; // prompt the user again
                    }
                    
             }
          } else {
              cout << "Unable to open file." << endl; // error if file doesnt exist
          }
       }
    } else {
       cout << "Unable to open file." << endl; // error if file doesnt exist
    }
}



void userViewCourses::viewPreviousCourses(user* passeduser)
{
  user* current=passeduser;
  int userTypeHold = current->getutype();
  
  if(userTypeHold==2){
     string filename = "facultyPreviousCourses.txt";
     string search_string;
     search_string = current->getUSN();

     ifstream infile(filename);
     string line;
     while (getline(infile, line)) {
         if (line.find(search_string) != string::npos) {
             cout << line << endl;
         }
     }
     infile.close();
  } else if(userTypeHold==1){
     string filename = "studentPreviousCourses.txt";
     string search_string;
     search_string = current->getUSN();

     ifstream infile(filename);
     string line;
     while (getline(infile, line)) {
         if (line.find(search_string) != string::npos) {
             cout << line << endl;
         }
     }
     infile.close();     
  }

}
