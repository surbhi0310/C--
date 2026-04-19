#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this-> next = NULL;
    }
};
void insertAtPosition(Node* &head, int data, int pos){
        Node* newNode = new Node(data);
        Node* temp = head;
        int cnt=1;
        while(cnt<pos-1){
            temp=temp->next;
            cnt++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp-> data<<" ";
            temp = temp-> next;
        }cout<<endl;
    }


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    display(head);
    insertAtPosition(head,20,2);
    display(head);
    insertAtPosition(head,30,3);
    display(head);
    insertAtPosition(head,40,4);
    display(head);

    insertAtPosition(head,50,3);
    display(head);
    

    return 0;
}