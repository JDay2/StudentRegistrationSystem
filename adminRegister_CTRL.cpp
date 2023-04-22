#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <sstream>

//NEEDS ERROR CHECKING
class adminRegistration
{
  public:
  void updateRegistration(user*);
};

void adminRegistration::updateRegistration(user* passeduser)
{
    string filename = "Registration.txt";
    string oldWord = "FALSE";
    string newWord = "TRUE";
    ifstream inputFile(filename); // Open the file for reading
    ofstream outputFile("temp.txt"); // Open a temporary file for writing

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            istringstream iss(line);
            string firstWord;
            iss >> firstWord; // Extract the first word from the line
            if (firstWord == oldWord) {
                outputFile << newWord << " " << iss.str().substr(firstWord.length()) << endl; // Write the new word and the rest of the line to the temporary file
            } else if (firstWord == newWord) {
                outputFile << oldWord << " " << iss.str().substr(firstWord.length()) << endl; // Write the new word and the rest of the line to the temporary file
            } else {
                outputFile << line << endl; // Write the original line to the temporary file
            }
        }
        inputFile.close();
        outputFile.close();

        remove(filename.c_str()); // Remove the original file
        rename("temp.txt", filename.c_str()); // Rename the temporary file to the original file name
    } else {
        cout << "Error opening file." << endl;
    }

    string inputFilename = "studentCurrentCourses.txt";
    string outputFilename = "studentPreviousCourses.txt";

    ifstream ainputFile(inputFilename);
    ofstream aoutputFile(outputFilename, ios::app);

    if (ainputFile && aoutputFile) {
        string line;
        while (getline(ainputFile, line)) {
            aoutputFile << line << endl;
        }
        cout << "Contents of " << inputFilename << " copied to " << outputFilename << endl;
    } else {
        cerr << "Error: Could not open file." << endl;

}
}
