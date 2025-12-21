#include<iostream>
using namespace std;
int main(){
int mat1[2][2], mat2[2][2], result[2][2];
cout<<"Enter elements of first 2*2 matrix: ";
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cin>>mat1[i][j];
  }
}
cout<<"Enter elements of second 2*2 matrix: ";
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cin>>mat2[i][j];
  }
}
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    result[i][j] = mat1[i][j] + mat2[i][j];
  }
}

cout<<"Resultant matrix after addition: ";
for(int i=0;i<2;i++){
  for(int j=0;j<2;j++){
    cout<<result[i][j]<<" ";
  }
}
}