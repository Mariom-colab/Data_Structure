#include "Stack.h"
#include <iostream>

int main() {
  Stack<int> st;

  std::cout << st.isEmpty() << std::endl;

  st.push(1);
  st.push(2);
  st.print();

  st.pop();
  std::cout << st.top() << std::endl;

  st.print();

  return 0;
}
