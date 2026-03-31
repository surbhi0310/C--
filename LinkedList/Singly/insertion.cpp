#include <iostream>
using namespace std;

// creating a node structure
struct Node{
    int data;      
    Node* next;    
};
Node* head = NULL;

void insertBeginning(int value){
    Node* newNode = new Node();   
    newNode->data = value;        
    newNode->next = head;         
    head  = newNode;           
};
int main(){
    insertBeginning(20);
    insertBeginning(10);
    return 0;
}