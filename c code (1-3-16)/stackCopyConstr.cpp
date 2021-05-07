#include <iostream>
#include <windows.h>


using namespace std;
class Stack{
   int top; char* arr;int sz;
   public:
      Stack() { // default constructor
         top=-1;
         arr= new char[10];
         sz=10;
      }
      Stack( int s) {
         top=-1;sz=s;
         arr= new char[s];
         HANDLE hConsole;
         hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
         SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
         cout<<endl<<"Constructor called!"<<endl;
         cout<<"*******************"<<endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
      }
      Stack (const Stack& sp){
         top=sp.top;sz=sp.sz;
         arr= new char[sz];
         for(int i=0;i<=top;i++)
            arr[i]=sp.arr[i];
        HANDLE hConsole;
        hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN| FOREGROUND_RED | FOREGROUND_INTENSITY);
         cout<<endl<<"Copy constructor called!"<<endl;
         cout<<"***********************"<<endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
      }
      ~Stack(){
        delete[] arr;
        HANDLE hConsole;
        hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED| FOREGROUND_INTENSITY);
        cout<<"Destructor called!"<<endl;
        cout<<"******************"<<endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
      }
      void push(char c){
        if (top < (sz-1) ){
            top++;
            arr[top]=c;
            cout<<endl<<"The stack now has "<<top+1<<" elements."<<endl;
        }
        else {cout<<"Stack is full!!!!!!!";}
      }
      void pop(){
        if (top >= 0){
            //char temp = arr[top];
            cout<<"element is :"<<arr[top]<<endl<<endl;
            top--;
            cout<<endl<<"The stack now has "<<top+1<<" elements."<<endl;
        } else {cout<<"Stack is empty!!!!!!";}
        }
        friend void display(Stack s);
};
 void display (Stack s){
        cout<<"*****************"<<endl;
        cout<<"The Stack has "<<s.top+1<<" element(s) now :-"<<endl;
        for (int i=s.top; i>=0;i--)
            cout<<s.arr[i]<<endl;
        cout<<"*****************"<<endl<<endl;
        cin.get();
        }
int main(){
   int num=10, choice=0;
   char elem;
   cout<<"Enter size of stack : ";
   cin>>num;
   Stack st = Stack(num);

   cout<<"Stack of "<<num<<" elements has been created. Operation :-"<<endl;
   cout<<"1 : Push"<<endl;
   cout<<"2 : Pop"<<endl;
   cout<<"3 : Display"<<endl;
   cout<<"4 : Quit"<<endl;
  while(1)  {
   cout<<"Enter choice :";
   cin>>choice;
   if (choice == 1){
    cout<<"Enter element to push:";
    cin>>elem;
    st.push(elem);
   } else if (choice == 2){
       st.pop();
       }
     else if (choice == 3)
        display(st);
     else if (choice == 4)
        break;
  }
   return 0;
}

