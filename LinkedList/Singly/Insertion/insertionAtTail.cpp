#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail,int data){
    Node* newNode = new Node(data);
    tail->next=newNode;
    tail=newNode;
    
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    display(head);
    insertAtTail(tail, 20);
    display(head);
    insertAtTail(tail, 30);
    display(head);
    insertAtTail(tail, 40);
    display(head);
    return 0;

}