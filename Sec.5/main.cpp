#include <iostream>

using namespace std;


    void addarrays(const float* a, const float *b, float *sum, int size);
    void display(const float* aa,int size);

int main()
{
    const int size = 5;
    float arr1[size] = {1, 2, 3, 4, 5};
    float arr2[size] = {6, 7, 8, 9, 10};
    float arr_result[size] = {0}; // what does this do?
    addarrays(arr1, arr2, arr_result, size);
    // print result

    display(arr_result,size);
    return 0;
}


    void addarrays(const float* a, const float *b, float *sum, int size)
    {
        for(int i=0;i<size;i++)
        {
            *(sum+i)=*(a+i)+*(b+i);
        }
    }
void display(const float* aa,int size)
{
    cout<<"\n{";
    for(int i=0;i<size;i++)
        {
            cout<<*(aa+i)<<" ";
        }
        cout<<"}"<<endl;
}
