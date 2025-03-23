#include <iostream>

using namespace std;
int maxint(int* ,int );

int main()
{
    int sz1; //the user's entered size
    int max1;
    cout<<"\nEnter your preferred Size of your string: "<<endl;
    cin>>sz1;
    cin.ignore(); //for neglecting '\n'
    int* arr1=new int[sz1];//=new int[sz]; //for a dynamic array of char.

    cout<<"\nEnter your integers: "<<endl;
    for(int i=0;i<sz1;i++)
    {
        cin>>arr1[i];
    }


    //call the function
    max1=maxint(arr1,sz1);
    //cout<<"\nYour Largest number is: "<<max1<<endl;
    //cout<<"\nits index is: "<<sz2<<endl;

    delete[] arr1;
    return 0;
}

int maxint(int* arr,const int sz)
{
    int i,ind;
    int maxm;

    for(i=1;(i<sz);i++)
    {
        if(arr[i]>arr[i-1])
        {
            maxm=arr[i];
            ind=i+1;
        }


    }
        cout<<"\nYour largest number is: "<<maxm<<endl;
        cout<<"and it's index is: "<<ind<<endl;
    return ind;
}

//there is a problem when we enter 1 and then 1
