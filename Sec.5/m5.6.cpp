#include <iostream>

using namespace std;

int main()
{
    int sz=10;
    int* ap[sz];

    cout<<"{";
        for(int j=0;j<10;j++)
        {
                            // allocate NUMARRAYS arrays
        *(ap+j) = new int[sz];     // each MAXSIZE ints long

            for(int k=0;k<10;k++)
            {
                ap[j][k]=(j*10+k)*10;
                cout<<ap[j][k]<<", ";

            }
            delete[] ap[j];
        }
        delete[] ap;
     cout<<"}";

    return 0;
}
