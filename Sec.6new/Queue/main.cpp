#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
  Queue<int> q;
  
  // test empty and full
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.enqueue(6);
  q.print();

  // test dequeue
  q.dequeue();
  q.print();

  // test dequeue and empty
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.print();

  // test circular behaviour
  for (int i = 0; i < 10; i++) {
    q.enqueue(i);
    q.print();

    q.dequeue();
  }

  return 0;
}
