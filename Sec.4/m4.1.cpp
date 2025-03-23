#include <iostream>
#include <cstring> //l2itha kda
#include<string.h>  //for using strlen
                    //Note that: the returned length doesn't include the null char '\0'
using namespace std;

char* reversit(char* );

int main()

{   int sz; //the user's entered size

    cout<<"Enter your preferred Size of your string: "<<endl;
    cin>>sz;
    cin.ignore(); //for neglecting '\n'
    char* temp1=new char[sz]; //for a dynamic array of char.
    char* temp2;
    cout<<"Enter your string plz: "<<endl;
    cin.getline(temp1,sz);
    temp2=  reversit(temp1);

    cout<<temp1;
    cout<<endl;
    cout<<temp2;

    delete[] temp1;
    return 0;
}
char* reversit(char* mystring)
{
    char temp;
    int i,j;
    int l=strlen(mystring); //for stringlength
    cout<<"\nThe length of the array: "<<l<<endl;
    //cout<<mystring[6];

    for( i=0,j=l-1;i<j;i++,j--)
    {
        temp=mystring[i];
        mystring[i]=mystring[j];
        mystring[j]=temp;
    }
    cout<<"\nfinished:"<<endl;
    return mystring;
}
