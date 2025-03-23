#include <iostream>

using namespace std;
double power(double n , int p=2);
int power(int n,int p=2);
long power(long n,int p=2);
float power(float n,int p=2);



int main()
{
    cout << "double power(2.5, 3): " << power(2.5, 3) << endl;
    cout << "int power(3, 4): " << power(3, 4) << endl;
    cout << "float power(1.5f, 2): " << power(1.5f, 2) << endl;
    cout << "long power(5L, 3): " << power(5L, 3) << endl;
    cout << "char power('a', 2): " << power('a', 2) << endl; // 'a' is 97 in ASCII
    cout << "int power(2): " << power(2) << endl; //using default power of 2
    cout << "double power(2.0): " << power(2.0) << endl; //using default power of 2
    return 0;
}

double power(double n, int p)
{
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

int power(char n, int p = 2) {
    int result = 1;
    int num = static_cast<int>(n); // Convert char to int
    if (p >= 0) {
        for (int i = 0; i < p; ++i) {
            result *= num;
        }
    } else {
        for (int i = 0; i < -p; i++) {
            result *= num;
        }
        result = 1 / num;
    }
    return result;

}

int power(int n, int p)
{
    int result = 1;
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



long power(long n, int p)
{
    long result = 1;
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



float power(float n, int p)
{
    float result = 1;
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
