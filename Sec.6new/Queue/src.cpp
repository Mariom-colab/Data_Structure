#include "Queue.h"
#include <iostream>

template <typename T> Queue<T>::Queue(int s) {

}

template <typename T> void Queue<T>::print() const {
  for (int i = front; i < back; i = (i + 1) % max_size)
    std::cout << q[i] << ' ';
  std::cout << std::endl;
}

// check if the queue is full (how is front relate to back)
template <typename T> bool  Queue<T>:: is_full() const {

}

// check if the queue is empty
template <typename T> bool  Queue<T>::is_empty() const {

}


// emplace the data at the end of the queue (at back) and advance back index
template <typename T> void Queue<T>::enqueue(T data) {

}

// remove and return the data at the beginning of the queue (at front) and advance front index
template <typename T> T Queue<T>::dequeue() {

}

template <typename T> Queue<T>::~Queue() {

}
