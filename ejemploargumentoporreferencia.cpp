#include<iostream>
using namespace std;
int addition (int & a, int b)
{
  int r;
  r=a+b;
    a=r;
    return r;
}
int main ()
{
  int z,x,y;
  x=5;
  y=3;
  z=addition (x,y);
  cout<< "el resultado es"<<z<<"\n";
  cout<<"el valor de x es"<<x<<"\n";
  z=addition (x,y);
  cout<< "el resultado es"<<z<<"\n";   
}
