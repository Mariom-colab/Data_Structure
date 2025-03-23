#include <iostream>

using namespace std;
void swap1(int&,int&);
int main()
{
    int n1,n2;
    cout<<"Enter your first and second numbers: ";
    cin>>n1>>n2;
    cout<<endl;

    swap1(n1,n2);
    cout<<"your numbers after swapping are: "<<n1<<"  "<<n2;
    return 0;
}
void swap1(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
