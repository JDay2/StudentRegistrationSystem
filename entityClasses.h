
using namespace std;

//abbrieviations:
//SMP- student main page
//FMP - faculty main page

class user
{
  public:

   string getUSN();  //sets counter to 0
   bool checkPassword();    //sets counter to the passed number defaults to 0 if nothing is passed
   void setUSN();  //sets username
   void setPWD();  //sets password
  private:
   string USN;       //8 characters, first initial then last name up to   
   string password;  //in the control class, can check and control length of password
   int 
}

class student : public user
{
  public:
   void viewCourses();     //from SMP calls the view current courses page 
   void viewPrevCourses(); //
   student();             //default constructor
   
};

