#include <iostream>
using namespace std;

class Student{
    int ID; string name;
public:
    Student (){
        this->ID=0;
        this->name="NULL";
    }
    Student(int ID, string name){
        this->ID=ID;
        this->name=name;
    }
    void setStudent(int ID, string name){
        ID=ID;
        name=name;
    }
    void displayStudent(){
	cout<<"Student ID   : " <<this->ID<<endl;
	cout<<"Student name : " <<this->name<<endl;
    }
};

int main()
{
    Student s1(1,"Aditi");
    s1.displayStudent();
    return 0;
}
