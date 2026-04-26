#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node(int x){
    data = x;
    this->next = NULL;
  }
};
class Stack{
  Node* top;
  int count;
  public:
  Stack(){
    top = NULL;
    count = 0;
  }
  void push(int x){
    Node* temp = new Node(x);
    temp->next = top;
    top = temp;
    count++;
  }
  void pop(){
    if(top==NULL){
      cout<<"Stack underflow";
    }
    Node* temp = top;
    top = top->next;
    delete temp;
    count--;
  }
  int peek(){
    if(top==NULL){
      cout<<"Stack is Empty\n";
      return -1;
    }
    return top->data;
  }
  int size(){
    return count;
  }
  bool isEmpty(){
    if(top==NULL){
      return true;
    }else{
      return false;
    }
  }
  void display(){
    Node* temp = top;
    while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
    }cout<<endl;
  }
};
int main() {
  Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    s.display();

    cout << "Top: " << s.peek()<<endl;
    cout << "Size: " << s.size()<<endl;
    cout << "Is Empty: " << s.isEmpty();

    return 0;
};