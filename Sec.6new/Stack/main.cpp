#include "Stack.h"
#include <iostream>

template <typename t>
 Stack<t>::Stack(s)
 {
     arr= new t[s];
    top_index=-1;

}

template <typename t>
 Stack<t>::~Stack()
 {
     delete[] arr;

}
template <typename t>
bool Stack<t>::isEmpty() const {
    return top_index==-1;

}

template <typename t>
bool Stack<t>::isFull() const {

    return top_index==9;

}

template <typename t>
void Stack<t>::push(t data) {
    if(isFull())
    {
        std::cout<<"My apologies, your Stack is Full"<<std::endl;
    }
    else
    arr[++top_index]=data;

}

template <typename t>
void Stack<t>::pop() {

    if(isEmpty())
    {
        std::cout<<"My apologies, your Stack is Empty"<<std::endl;
    }
    else
    top_index--;

}

template <typename t>
int Stack<t>::top() const {
    if(isEmpty())
    {
        std::cout<<"My apologies, your Stack is Empty"<<std::endl;
    }
    else

    return arr[top_index];

}

template <typename t>
void Stack<t>::print() const {
  for (int i = 0; i <= top_index; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << std::endl;
}
