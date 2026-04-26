#include <iostream>
using namespace std;

class Node{
  int data;
  Node next*;
  public:
  Node(int x){
    data = x;
    this.next = NULL;
  }
}
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
    delete top;
    top = temp->next;
  }
}
int main() {
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    cout << "Top: " << peek();

    return 0;
}