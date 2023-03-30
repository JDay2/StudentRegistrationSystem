
using namespace std;

//abbrieviations:
//SMP- student main page
//FMP - faculty main page

class user
{
  public:

   string getUSN();  //gets username
   bool checkPassword();    //checks password
   void setUSN();  //sets username
   void setPWD();  //sets password
  private:
   string USN;       //8 characters, first initial then last name up to   
   string password;  //in the control class, can check and control length of password
   int uType; //0 for admin, 1 for student, 2 for professor
};
