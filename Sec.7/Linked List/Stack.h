#include "LinkedList.h"

template <typename T>
class Stack {
private:
  LinkedList<T> list;

public:
  Stack() {}

  void push(T elem) {
    list.insertFirst(elem);
  }

  void pop() {
    list.removeFirst();
  }

  T top() {
    return list[0];
  }

  bool isEmpty() {
    return list.isEmpty();
  }
};
