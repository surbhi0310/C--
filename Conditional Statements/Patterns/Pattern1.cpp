#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    cin>>n;
    // ------------Pattern 1---------------    
    for(int i=0; i<n; i++){
      for(int j=0;j<=n;j++){
        cout<<"*";
        }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 2---------------    
    for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
        cout<<"*";
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 3---------------    
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<j;
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 4---------------    
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<i;
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 5---------------    
    for(int i=1;i<=n;i++){
      for(int j=n;j>=i;j--){
        cout<<"*";
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 6---------------    
    for(int i=0;i<n;i++){
      for(int j=n;j>i;j--){
        cout<<i+1;
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 7---------------    
    int temp=1;
    for(int i=0;i<n;i++){
      for(int j=0;j<n-i;j++){
        cout<<temp;
        temp++;
      }
      cout<<endl;
      temp=1;
    }
    cout<<endl;
    
    // ------------Pattern 8---------------    
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
        cout<<" ";
      }
      for(int j=1;j<=(i*2)-1;j++){
        cout<<"*";
    }cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 9---------------    
    for(int i=0;i<n;i++){
      for(int j=0;j<i;j++){
        cout<<" ";
      }
      for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
      }
      cout<<endl;
    }
    cout<<endl;

    // ------------Pattern 10---------------    
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
        cout<<" ";
      }
      for(int j=1;j<=(i*2)-1;j++){
        cout<<"*";
    }cout<<endl;
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<i;j++){
        cout<<" ";
      }
      for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 11---------------    
    for(int i=0;i<n;i++){
      for(int j=0;j<i+1;j++){
        cout<<"*";
      }cout<<endl;
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n-(i+1);j++){
        cout<<"*";
      }cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 12---------------    
    // int temp=1;
    for(int i=0;i<n;i++){
      for(int j=1;j<=i+1;j++){
        cout<<temp;
        if(temp==1){
          temp--;
        }
        else{
          temp++;
        }
      }cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 13---------------    
    // int temp=1;
    for(int i=1;i<=n;i++){
        if(i%2==0) temp=0;
        else temp=1;
        for(int j=1;j<=i;j++){
          cout<<temp;
          temp=1-temp;
          
    }cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 14---------------    
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<j;
      }
      for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
      }
      for(int j=i;j>=1;j--){
        cout<<j;
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 15---------------    
    int count = 0;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        count++;
        cout<<count<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 16---------------    
    for(int i=1;i<=n;i++){
      char ch='A';
      for(int j=1;j<=i;j++){
        cout<<ch;
        ch++;
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 17---------------    
    for(int i=1;i<=n;i++){
      char ch='A';
      for(int j=1;j<=n-i+1;j++){
        cout<<ch;
        ch++;
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 18---------------    
    char ch='A';
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<ch;
      }
      ch++;
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 19---------------    
    for(int i=0;i<n;i++){
      for(int j=1;j<n-i;j++){
        cout<<" ";
      }
      char ch='A';
      int breakpoint=(2*i+1)/2;
      for(int j=1;j<=2*i+1;j++){
        cout<<ch;
        if(j<=breakpoint) ch++;
        else ch--;
      }
      cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 20---------------    
    for(int i=0;i<n;i++){
      for(char j='E'-i;j<='E';j++){
        cout<<j;
      }
      cout<<endl;
    }
    cout<<endl;

    // ------------Pattern 21---------------    
    for(int i=0;i<n;i++){
      for(int j=0;j<n-i;j++){
        cout<<"*";
      }
      for(int j=0;j<2*i;j++){
        cout<<" ";
      }
      for(int j=0;j<n-i;j++){
        cout<<"*";
      }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<i+1;j++){
        cout<<"*";
      }
      for(int j=0;j<2*(n-i)-2;j++){
        cout<<" ";
      }
      for(int j=0;j<i+1;j++){
        cout<<"*";
      }
    cout<<endl;
    }
    cout<<endl;

    // ------------Pattern 22---------------    
    for(int i=0;i<n;i++){
      for(int j=0;j<i+1;j++){
        cout<<"*";
      }
      for(int j=0;j<2*(n-i-1);j++){
        cout<<" ";
      }
      for(int j=0;j<i+1;j++){
        cout<<"*";
      }
    cout<<endl;
    }
    for(int i=1;i<n;i++){
      for(int j=1;j<=n-i;j++){
        cout<<"*";
      }
      for(int j=1;j<=2*i;j++){
        cout<<" ";
      }
      for(int j=1;j<=n-i;j++){
        cout<<"*";
      }
    cout<<endl;
    }
    cout<<endl;
    
    // ------------Pattern 23(Rectangle)---------------    
    int s;
    cin>>s;
    for(int i=1;i<=s;i++){
      cout<<"*";
    }
    cout<<endl;
    cout<<"*";
    for(int j=1;j<=s-2;j++){
      cout<<" ";
    }
    cout<<"*";
    cout<<endl;
    cout<<"*";
    for(int j=1;j<=s-2;j++){
      cout<<" ";
    }
    cout<<"*";
    cout<<endl;
    for(int i=1;i<=s;i++){
      cout<<"*";
    }
    cout<<endl;
    
    // -----------Pattern 24(Square)--------
    for(int i=0;i<s;i++){
      for(int j=0;j<s;j++){
        if((i==0)||(i==s-1)||(j==0)||(j==s-1)){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }cout<<endl;
    }

    // ------------Pattern 25---------------
    // int s;//brute force approach (not recommended)
    // s=7;
    for(int i=0;i<s;i++){
      for(int j=0;j<s;j++){
        if((i==0)||(i==s-1)||(j==0)||(j==s-1)){
          cout<<4;
        }
        else{
          if((i==1)||(i==s-2)||(j==1)||(j==s-2)){
          cout<<3;
          }
          else if((i==2)||(i==s-3)||(j==2)||(j==s-3)){
          cout<<2;
          }
          else{
          cout<<1;
          }
        }
      }cout<<endl;
    }

    cout<<endl;
// ---------------OR-----------------
    // int s; //optimal maths formula based approach
    // cin >> s;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            int minDist = min(min(i, j), min(s - i - 1, s - j - 1));
            cout << (s / 2 + 1 - minDist);
        }
        cout << endl;
    }
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            int minDist = min(
                min(i, j),
                min(s - i - 1, s - j - 1)
            );
            cout << n - minDist << " ";
        }
        cout << endl;
    }
    cout<<endl;
    // ----------------OR-----------------
    // int n;
    // cin >> n;
    int size = 2 * n - 1;
    // create 2D array (optimal way using vector)
    vector<vector<int>> arr(size, vector<int>(size));
    int start = 0;
    int end = size - 1;
    int value = n;
    while (value > 0) {
        for (int i = start; i <= end; i++) {
            for (int j = start; j <= end; j++) {
                arr[i][j] = value;
            }
        }
        start++;
        end--;
        value--;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  return 0;
}
