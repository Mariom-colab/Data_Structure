#include <iostream>

using namespace std;

double power(double n, int p=2 );

int main()

{
    double number, result;
    int pow;
    char c;
    cout<<"Enter your number, please: ";
    cin>>number;
    cout<<"\nYou want to enter the desired power? (y/n): ";
    cin>>c;

    if(c=='y')
    {
        cout<<"\nEnter your desired power: ";
        cin>>pow;
        result=power(number,pow);
        cout<<"\nThe result is: "<<result<<endl;

    }
    else
    {
        result=power(number,2);
        cout<<"\nThe result is: "<<result<<endl;

    }


    return 0;
}

double power(double n, int p) {
    double result = 1;
    if (p >= 0)
    {

        for (int i = 0; i < p; ++i)
         {
            result *= n;
         }
    } else
    {
        for(int i = 0; i < -p; i++)
        {
            result *= n;
        }
        result = 1/result;
    }

    return result;
}
