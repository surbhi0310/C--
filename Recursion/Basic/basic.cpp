#include <iostream>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}
int pow(int n, int p){
    if(p==0)
        return 1;
    if(n==0)
        return 0;
    if(n==1)
        return 1;   
    return n*pow(n,p-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<fib(n)<<endl;
    cout<<pow(n,0)<<endl;
    return 0;
}