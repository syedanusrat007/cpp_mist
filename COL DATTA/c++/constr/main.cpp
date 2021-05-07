#include <iostream>
using namespace std;

class Student {
     int student_id;
     string name;
    public:
        Student(){
           cout<<"First Constructor has been called ! "<<endl;
           student_id=0;
           name="null";
           displayStudent();
        }
        Student(int roll, string na){
            cout<<"Second Constructor has been called ! "<<endl;
            student_id=roll;
            name=na;
        }
       // ~Student(){ cout<<"Destructor has been called ! "<<endl;}
     void displayStudent(){
        cout<<"ID : " <<student_id<<endl;
        cout<<"Name : "<<name<<endl;
     }
     void setStudent(int roll, string s){

       student_id=roll;
       name=s;
     }
};

int main(){

    Student cse01;
    cse01.setStudent(1,"Aditi");
    cout<<"First Student : "<<endl;
    cse01.displayStudent();
    cout<<"Another student : "<<endl;
    Student cse02(2,"Raj");
    cse02.displayStudent();
    Student* ptrStudent = new Student(3, "alam");
    ptrStudent->displayStudent();
    return 0;
}

/*


    int numStudents=0;
   cout<<"How many students in the system ? " ;
   cin>>numStudents;
   Student *stdArray = new Student();
*/
