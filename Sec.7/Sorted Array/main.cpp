#include <iostream>

using namespace std;

class SortedArray {
private:
  int *arr;
  int size;
  int count;

public:
  SortedArray(int size)
   {
       this->size=size;
       arr=new int[size];
       count=0;
   }

   bool isFull()
   {
       //return arr[size-1]!=NULL;
       return count==size;
   }
   bool isEmpty()
   {
       //return arr[0]==NULL;
       return count==0;
   }
   void swap(int& a, int&b)
   {
       int temp=a;
       a=b;
       b=temp;
   }
  void insert(int elem)
  {
      if(isFull()) throw"Sorry, your array is Full ";
      else if(count==0)
      {arr[0]=elem;
      count++;
      }
      else
        {
            int i = 0;
        while (i < count && arr[i] < elem)
        {
            i++;
        }
         for (int j = count; j > i; j--) {
                arr[j] = arr[j - 1];}

            arr[i]=elem;
            count++;
        }
  }

  void remove(int elem)
   {
      if(isEmpty()) throw"Sorry, your array is Empty ";
      else
        {
            int i=0;
            while(i<count&&arr[i]!=elem)
            {
                i++;
            }
            if (i == count)throw"Not Founded";
            for(int j=i;j<count-1;j++)
            {
                arr[j]=arr[j+1];
            }
            count--;
        }
  }


  void print()
   {
      if(isEmpty()) throw"Sorry, your array is Empty ";

       int i=0;
       cout<<"\n{";
       while(i<count)
       {
           cout<<arr[i]<<" ";
           i++;
       }
              cout<<"}\n";

   }
};

int main() {
  SortedArray sarr(10);

  sarr.insert(10);
  sarr.insert(12);
  sarr.insert(0);
  sarr.print();

  sarr.insert(12);
  sarr.print();

  sarr.remove(10);
  sarr.print();

  return 0;
}

