//ch3 q12

/*
Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
 Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
 applied to fractions:
 Addition:
 Subtraction:
 Multiplication:
 Division:
 a/b + c/d = (a*d + b*c) / (b*d)
 a/b - c/d = (a*d - b*c) / (b*d)
 a/b * c/d = (a*c) / (b*d)
 a/b / c/d = (a*d) / (b*c)
 The user should type the first fraction, an operator, and a second fraction. The program
 should then display the result and ask whether the user wants to continue

 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    char dummychar; //for '/' 'a/b' fraction's sign
    char ope;
    char ans='n';//for continue
    do
    {
        cout<< "enter your first fraction, the operator, the second fraction: ";
        cin>>a>>dummychar>>b>>ope>>c>>dummychar>>d;
        cout<<endl;
    switch (ope)
    {
            case'+':cout<<"your result is: "<< a*d+b*c <<"/"<<b*d<<endl; break;
            case'-':cout<<"your result is: "<< a*d-b*c <<"/"<<b*d<<endl; break;
            case'*':cout<<"your result is: "<< a*c <<"/"<<b*d<<endl; break;
            case'/':cout<<"your result is: "<< a*d <<"/"<<b*c<<endl; break;


    }
        cout<<"\n do you want to continue (y/n): ";
        cin>>ans;

    }while(ans=='y');

    return 0;
}
