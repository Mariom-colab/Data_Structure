#pragma once
#include <iostream>

using std::ostream;

template <typename T>
struct Node {
  T data;
  Node *next;
};

template <typename T>
class LinkedList {
private:
  Node<T> *head;
  int size;

  // always remeber to delete unused Node
public:
  // assign the head to null
  LinkedList() { head=NULL;
  size=0;

  }

  // delete all nodes in the list
  ~LinkedList() {
      while(head!=NULL)
      {
              Node<T> *temp=head;
              head=head->next;
              delete temp;


      }

  }

  // for debugging
  friend ostream& operator<<(ostream& os, const LinkedList<T>& list) {
     Node<T>* temp = list.head;
        while (temp != nullptr) {
            os << temp->data << " -> ";
            temp = temp->next;
        }
        os << "NULL";
        return os;
  }

  // insert a new node at the given index
  void insertAt(int index, const T& data) {
    if (index < 0 || index > size) return;

    Node<T>* newcar = new Node<T>();
    newcar->data = data;

    if (index == 0) {
        newcar->next = head;
        head = newcar;
    } else {
        Node<T>* temp = head;
        for (int i = 0; i < index ; ++i) {
            temp = temp->next;
        }
        newcar->next = temp->next;
        temp->next = newcar;
    }

    size++;
}

  // remove the node at the given index
  void removeAt(int index) {
      Node<T> *temp1=head;
        Node<T> *temp2=head;

      if(size==0)throw"Empty!!";
      else if (index == 0) {
        temp2 = head;
        head = head->next;
        delete temp2;
    }
    else{

        Node<T> *temp1=head;
        Node<T> *temp2=head;

        for(int i=0;i<index;i++)
                  {
                      temp1=temp1->next;
                      temp2=temp2->next;

                  }
                  temp1=temp1->next;
                  delete temp2;

    }
    size--;

  }

  // return the node at the given index
  T operator[](int index) {

      Node<T>* E;
      E=head;
      for(int i=0;i<index;i++)
      {
          E=E->next;
      }
      return E->data;

  }


  // insert a new node at the end of the list
  void insertLast(const T& data) {
      Node<T>* E;
      E=head;

      Node<T>* newcar = new Node<T>();
    newcar->data = data;

      while(E!=NULL)
      {
          E=E->next;
      }
      E->next=newcar;
      newcar->next=NULL;
      size++;

  }
  // remove the last node
  void removeLast() {
      if(size==0)throw"Empty!!";
    else if (head->next == NULL) {
        delete head;
        head = NULL;
    }
    else {
    Node<T>* E;
     Node<T>* F = head->next;

      E=head;
      F=E->next;
      while(F->next!=NULL)
      {
          E=E->next;
          F=F->next;
      }
     delete F;
      E->next=NULL;
    }
    size--;
  }


  // insert a new node at the beginning of the list
  void insertFirst(const T& data) {
      Node<T>* newcar=new Node<T>;
      newcar->data=data;
      newcar->next=head->next;
      head=newcar;
    size++;
  }

  // remove the first node
  void removeFirst() {
        Node<T> *temp;
        temp=head;
        head=head->next;

        delete temp;



  }
  bool isEmpty() {
    return head == NULL;
    //return size==0;
};
