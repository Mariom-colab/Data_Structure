//chapter 2 q9

#include <iostream>

using namespace std;

int main()
{   int a,b,c,d;
    char dummychar;

    cout << "Enter your first number" << endl;
    cin>>a>>dummychar>>b;
        cout << "second your first number" << endl;
    cin>>c>>dummychar>>d;

    cout<<"sum is: "<<a*d+b*c<<dummychar<<b*d<<endl;
    return 0;
}
