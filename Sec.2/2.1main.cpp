#include <iostream>

using namespace std;
struct point
    {
      float  x,y;

    };

int main()
{
    point a;
    point b;
    point c;

    cout<<"Enter Coordinates for p1: "<<endl;
    cin>>a.x>>a.y;


   cout<<"Enter Coordinates for p2: "<<endl;
    cin>>b.x>>b.y;

    c.x=a.x+b.x;
    c.y=a.y+b.y;
cout<<"Coordinates of p1+p2 are: "<<c.x<<", "<<c.y<<endl;

    return 0;
}
