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
  } else if(userTypeHold==1){
     


        ifstream file("studentCurrentCourses.txt"); // open the file
        string line;

        if (file.is_open()) { // check if file is open
           string lines[100]; // declare an array to store the lines
           int count = 0;

           string search_string;
           search_string = current->getUSN();
           
           if (file.is_open()) { // check if file is open
              while (getline(file, lines[count])) { // read lines and store them in the array
                  count++;
              }
              file.close(); // close the file

              // print out the lines and ask the user to select one
              for (int i = 0; i < count; i++) {
                 cout << i+1 << ": " << lines[i] << endl;
              }
              int selection;
              cout << "Enter the line number of the class you want to view grades for: ";
              cin >> selection;
              cout << "You selected: " << lines[selection-1] << endl;
              string filename = "courseGrades.txt";
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
              else {
              cout << "Unable to open file." << endl;
              }
           }
        }

    else {
       cout << "Unable to open file." << endl;
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
