//optimal approach
#include <iostream>
using namespace std;
int findGcd(int N1, int N2) {
  for (int i = min(N1, N2); i>=1 ; i--) {
    if (N1%i==0 && N2%i==0) {
      return i;
    }
  }
}

int main() {
    int N1 = 81;
    int N2 = 18;
    cout << "GCD" << ": ";
    cout<<findGcd(N1,N2);

    return 0;
}