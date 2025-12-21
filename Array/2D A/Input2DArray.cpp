#include<iostream>
using namespace std;
int main(){
int mat[2][2];
cout<<"Enter elements of a 2*2 matrix: ";
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cin>>mat[i][j];
  }
}
cout<<"2D Array: ";
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cout<<mat[i][j]<<" ";
  }
}
}