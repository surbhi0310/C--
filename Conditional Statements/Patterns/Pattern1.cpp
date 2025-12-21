#include <iostream>
using namespace std;


// int main(){
//   int n;
//   cout<<"Enter No. of Rows: ";
//   cin>>n;
//   for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }
//----------------------------------
// int main(){
//   int n;
//   cout<<"Enter the no. of row: ";
//   cin>>n;
//   for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//       cout<<j;
//     }
//     cout<<endl;
//   }
// }
// --------------OR-----------------
// int main(){
//   int n;
//   cout<<"Enter No. of Rows: ";
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//       cout<<j;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   };
// }
// --------------------------------------
// int main(){
//   int n;
//   cout<<"Enter the no. of Rows: ";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1; j<=n; j++){
//       cout<<i;
//     }
//     cout<<endl;
//   }
// }
// ---------------------------------------
// int main(){
//   int n;
//   cout<<"Enter the no. of Rows: ";
//   cin>>n;
//   for(int i=1;i<=n;i++){
//     for(int j=1; j<=n; j++){
//       cout<<n-j+1;
//     }
//     cout<<endl;
//   }
// }
// ------------------------------------------
int main(){
  int n;
  cout<<"Enter the no. of Rows: ";
  cin>>n;
  int count=1;
  for(int i=1;i<=n;i++){
    for(int j=1; j<=n; j++){
      cout<<count<<" ";
      count+1;
      j++;
    }
    cout<<endl;
  }
}


