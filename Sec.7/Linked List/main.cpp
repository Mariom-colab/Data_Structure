#include "LinkedList.h"
#include <iostream>

using namespace std;

void testList();
void testStack();
void testCalculator();

int main() {
  return 0;
}

void testList() {
  LinkedList<int> list;

  // test insertFirst
  list.insertFirst(6);
  list.insertFirst(5);
  list.insertFirst(4);
  list.insertFirst(3);
  list.insertFirst(2);
  list.insertFirst(1);
  // list = 1 -> 2 -> 3 -> 4 -> 5 -> 6
  cout << list << endl;

  // test insertLast
  list.insertLast(7);
  list.insertLast(8);
  // list = 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8
  cout << list << endl;

  // test removeFirst
  list.removeFirst();
  // list = 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8
  cout << list << endl;

  // test removeLast
  list.removeLast();
  // list = 2 -> 3 -> 4 -> 5 -> 6 -> 7
  cout << list << endl;

  // test operator[]
  // 2 4 6
  cout << list[0] << ' ' << list[2] << ' ' << list[4] << endl;

  // test insertAt
  list.insertAt(2, 10);
  // list = 2 -> 3 -> 10 -> 4 -> 5 -> 6 -> 7
  cout << list << endl;

  // test removeAt
  list.removeAt(2);
  // list = 2 -> 3 -> 4 -> 5 -> 6 -> 7
  cout << list << endl;

}

