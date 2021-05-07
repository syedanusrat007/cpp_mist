#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myIntVector;

// Add some elements to myIntVector
    myIntVector.push_back(1);
    //myIntVector.push_back(4);
    //myIntVector.push_back(8);
    //myIntVector.push_back(11);
    myIntVector.push_back(42);
    myIntVector.push_back(83);
    cout<<"Size : "<<myIntVector.size()<<endl;
    cout<<"Capacity :"<<myIntVector.capacity()<<endl;
    cin.get();
    for( unsigned int i=0;i < myIntVector.size(); i++) {

        cout<< myIntVector.at(i)<<" ";
    //Should output 1 4 8
    }
}
