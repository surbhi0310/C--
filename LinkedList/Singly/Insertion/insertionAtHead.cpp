//Insertion at Head or Beginning
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
    void insertAtBegin(Node* &head, int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    void print(Node* head ){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;

        }cout<<endl;
    }

int main(){
    Node* node1 = new Node(8);
    Node* head = node1;
    print(head);
    insertAtBegin(head,4);
    print(head);

    return 0;
}