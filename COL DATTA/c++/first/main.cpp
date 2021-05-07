#include <iostream>
using namespace std;

class Student {
    //public:
     int student_id;
     char *name;
    public:
     void displayStudent(){
        cout<<"ID : " <<student_id<<endl;
        cout<<"Name : "<<name<<endl;
     }
};

int main(){
   Student cse_01, cse_02;
    cout<<"Welcome to Student Admin Program : "<<endl;
   // cin.get();
   // cse_01.student_id= 15001;
    //cse_01.name="Aditi";
    cse_01.displayStudent();
    return 0;
}
