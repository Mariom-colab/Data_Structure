#pragma once
template<typename t>
class Stack {
  private:
    int top_index, n; //n for the entered size from user
    t* arr;

  public:
    Stack(int s);

    bool isEmpty() const;

    bool isFull() const;

    void push(t data);

    void pop();

    int top() const;

    void print() const;
};
