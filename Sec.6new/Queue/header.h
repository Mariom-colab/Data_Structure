#pragma once

template <typename T>
class Queue {
private:
  T *q;
  int max_size;

  // front contains the index of the front element
  int front;

  // back contains the index of the last element
  int back;

public:
  // constructor that allocates memory
  // set max_size to s which has default value of 5
  Queue(int s = 5);

  // put the data at the end of the queue
  void enqueue(T data);

  // return the data at the beginning of the queue and remove it from the queue.
  T dequeue();

  bool is_full() const;

  bool is_empty() const;

  // for debug
  void print() const;

  // destructor that clears the queue and free memory
  ~Queue();
};
