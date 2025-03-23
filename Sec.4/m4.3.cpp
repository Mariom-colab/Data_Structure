#include <iostream>

using namespace std;
const int LIMIT=100;   //const int LIMIT=100; is not correct inside the class


class safearay
{
private:
    int arr[LIMIT];

public:
    void putel(int ind1, int val1)
    {
        if(0<ind1&&ind1<LIMIT-1)
        {
            arr[ind1]=val1;

        }
         else
                cout<<"\n Out of limit"<<endl;
    }

    int getel(int ind2)
    {
        if(0<ind2&&ind2<LIMIT-1)
        {
            return arr[ind2];

        }
        else
                cout<<"\n Out of limit"<<endl;
       //return val;
    }
};

int main()
{
    safearay sa1;           // define a safearay object
 int temp = 12345;       // define an int value
 sa1.putel(7, temp);     // insert value of temp into array at index 7
 temp = sa1.getel(7);    // obtain value from array at index 7

 cout<<endl;
 cout<<temp;
    return 0;
}
