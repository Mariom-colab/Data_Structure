#include <iostream>

using namespace std;

/*
int gcd(int a,int b)
    {
        if(b==0)
        {
            return a;
        }
       return gcd(b,a%b);
    }

*/
class Fraction
{
private:
    int num;
    int denom;
    char dummychar;
public:
    Fraction(int n, int d)
    {
        num=n;
        denom=d;

    }
    //default copy constructor
    /*
     Fraction(int num, int den)
    {
        this->num=num;
        this->denom=denom;

    }
    */
   // Fraction(int n,int d): num(n), den(d) {}

    Fraction(): num(0), denom(1)
    {

    }
       // Fraction(int n,int d): num(0), den(1) {}

       int gcd(int a, int b)
        {
            if (b == 0)
              return a;
            return gcd(b, a % b);
       }

    void print()
    {
        cout<<endl<<num<<"/"<<denom<<endl;

    }
    void get()
    {
        cout<<endl<<"Enter your fraction: ";
        cin>>num>>dummychar>>denom;
        cout<<endl;

    }

    Fraction operator+(const Fraction& f1)
    {
        Fraction res;
        res.num=num*f1.denom+f1.num*denom;
        res.denom=denom*f1.denom;
        return  res;

    }

    Fraction operator-(const Fraction& f1)
    {
        Fraction res;
        res.num=num*f1.denom-f1.num*denom;
        res.denom=denom*f1.denom;
        return  res;

    }

    Fraction operator*(const Fraction& f1)
    {
        Fraction res;
        res.num=num*f1.num;
        res.denom=denom*f1.denom;
        return  res;

    }
    Fraction operator/(const Fraction& f1)
    {
        Fraction res;
        res.num=num*f1.denom;
        res.denom=denom*f1.num;
        return  res;

    }

    friend istream &operator>>(istream &in, Fraction &f)
     {
        char dummy;
        in >> f.num >> dummy >> f.denom;
        return in;
  }

  friend ostream &operator<<(ostream &out, const Fraction &f)
  {
        out << f.num << "/" << f.denom;
        return out;
  }
   void simplify()
    {
        int g= gcd(num,denom);
        num/=g;
        denom/=g;

    }





};

int main()
{
  Fraction f1, f2, res;
  char op;

  cout << "a op b: \n";
  cin >> f1 >> op >> f2;


  switch (op)
  {
  case '+':
    res = f1 + f2;
    break;
  case '-':
    res = f1 - f2;
    break;
  case '/':
    res = f1 / f2;
    break;
  case '*':
    res = f1 * f2;
    break;
  default:
    cout << "Invalid Operation";
  }
  res.simplify();
  cout << res;

  return 0;

}


