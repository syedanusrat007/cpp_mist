#include <iostream>
#include <exception>
using namespace std;
void func1(){
    int var;
    cout<<"enter an integer :";
       cin >> var;
       if (var <0){
            throw 10;
       }
       else if ( var > 10){
            throw 2.2;
       }
}
int main(){

    try{
       int* arr = new int[10000000];
    cout << "Hello world!" << endl;
    }
    catch(exception e){
        cout << e.what();
    }


    return 0;
}
