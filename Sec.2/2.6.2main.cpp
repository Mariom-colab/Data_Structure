//ch3 q4

#include <iostream>

using namespace std;

int main()
{   char ans='n'; //for another problem;
    int a,b;

    char ope;//for the operator
    float result;


    do
    {

    cout<<" Enter first number, operator, second number: "<<endl;
    cin>>a>>ope>>b;
        switch (ope)
        {
            case '+': result=a+b; break;
            case '-':result=a-b; break;
            case '*':result=a*b; break;
            case '/':result=a/b; break;
            case '%':result=a%b; break;
        }

    cout<<"Your result is: "<<result<<endl;;
    cout<<"Do another (y/n)? ";
    cin>>ans;

    }while(ans=='y');


    return 0;
}
