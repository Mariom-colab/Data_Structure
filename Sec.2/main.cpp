#include <iostream>

using namespace std;
void zeroSmaller(int&, int&);

int main()
{
    int n1,n2;
    cout << "Enter your numbers: " ;
    cin>>n1>>n2;
    cout<<endl;
    zeroSmaller(n1,n2);
    cout<<"your  numbers now are: "<<n1<<" "<<n2;

    return 0;
}
void zeroSmaller(int &a, int &b)
{
 if (a<b)
 {
    a=0;

 }

 else
    {
        b=0;


    }
}
