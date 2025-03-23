#include <iostream>

using namespace std;

int main()
{
    int sz=10;
    int a0[sz],a1[sz],a2[sz],a3[sz],a4[sz],a5[sz],a6[sz],a7[sz],a8[sz],a9[sz];
    //int* ap[sz];
        int* ap[sz] = { a0, a1, a2, a3, a4, a5, a6, a7, a8, a9 };
 cout<<"{";
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<10;k++)
            {
                ap[j][k]=(j*10+k)*10;
                cout<<ap[j][k]<<", ";
            }
        }
     cout<<"}";

       // int* ap={a0,a1,a2,a3,a4,a5,a6,a7,a8,a9};
    //ap={a0[],a1[],a2[],a3[],a4[],a5[],a6[],a7[],a8[],a9[]};
    return 0;
}
