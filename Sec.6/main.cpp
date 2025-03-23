#include <iostream>

using namespace std;

int main()
{

    int sz; //the user's entered size
    float sum=0;
    cout<<"\nEnter your preferred number of your floats: "<<endl;
    cin>>sz;
    if(sz<=0)
    {
        cout<<"Cannot Enter "<< sz<<"number";
        return 0;

    }
    cin.ignore(); //for neglecting '\n'
    int* arr1=new int[sz];//=new int[sz]; //for a dynamic array of char.

    for(int i=0;i<sz;i++)
    {
        cout<<"\nEnter your number: "<<endl;

        cin>>arr1[i];
        cout<<"You Entered: "<<arr1[i]<<endl;
        sum+=arr1[i];
    }
    cout<<"Your average is: "<<sum/sz;
    return 0;
}
