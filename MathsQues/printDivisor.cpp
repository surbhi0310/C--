#include <iostream>
#include <bits/stdc++.h>
// #include <vector>
// #include<cmath>
using namespace std;

//Optimal Approach:
// Time Complexity: O(sqrt(N)), we check for every number between 1 and sqaure root of N.
// Space Complexity: O(2*sqrt(N)) or O(N), extra space used for storing divisors.
void PrintDivisor(int n){
    vector<int> ls;

    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            ls.push_back(i);

            if(n / i != i){
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
}


// --------------------------------OR----------------------------------

// Brute Force Approach:
// Time Complexity: O(N), we check for every number between 1 and N.
// Space Complexity: O(N), extra space used for storing divisors.
    void getDivisors(int N) {
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
              cout<<i<<" ";
            }
        }
    }


int main() {
    int n;
    cin >> n;
    int N=n;
    PrintDivisor(n);
    cout<<endl;
    getDivisors(N);

  return 0;
}
