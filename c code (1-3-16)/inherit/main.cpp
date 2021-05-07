#include <iostream>
using namespace std;

class Box
{

  private:

      double width=2.3;
  private:
    int n1=1;
  protected:
    int n2=2;
  public:
    int n3=3;
public:
      void setSmallWidth( ){
        width = 5.0;
      }

      double getSmallWidth( void ){
          return width;

      }
};

class SmallBox:public Box // SmallBox is the derived class.
{
   protected:
     int cp=10;
    public:
       double f2( void ){
          cout << "n2 : "<< n2 << endl;
        //return width ;
       }
     /* void setSmallWidth( double wid ){
        width = wid;
      }

      double getSmallWidth( void ){
          cout << "n2 : "<< n2 << endl;
        //return width ;
      }*/int c1=5;
};

int main( )
{
   SmallBox box;

   // set box width using member function
   box.setSmallWidth();

   cout << "Width of box : "<< box.getSmallWidth() << endl;
    cout << "c1 : "<<box.c1;
    box.f2() ;
   return 0;
}
