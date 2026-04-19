#include <iostream>
using namespace std;
#include <stack>

//code using STL Stack
int main(){
    stack<int> s;
    s.push(30);
    s.push(89);
    s.push(9);
    s.push(45);
    s.push(76);


    cout<<s.top()<<endl;//view topmost element of stack(top/peek)
    s.pop();
    cout<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of stack is "<<s.size()<<endl;



    //traversal and printing stack elements
    stack<int> st = s; //create a copy of the original stack to preserve it
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    return 0;
}