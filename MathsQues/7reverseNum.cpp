#include <iostream>
#include <limits.h>
using namespace std;

int ReverseNum(int n){
    int revNum = 0;
    while (n > 0){
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    return revNum;
}

// ----------------OR--------------------
// leet Q7
int reverse(int x){
    int ans = 0;
    while (x != 0){
        int n = x % 10;
        if ((ans * 10 > INT_MAX) || (ans * 10 < INT_MIN)){
            return 0;
        }
        ans = (ans * 10) + n;
        x = x / 10;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << ReverseNum(n);
    cout<<endl;
    cout << reverse(-123);
    return 0;
}


// INT_MAX is a macro that represents the maximum value of the upper limit of the integer data type in C/C++. 
// The value of INT_MAX is:
// INT_MAX = 2147483647   (for 32-bit Integers)
// INT_MAX = 9,223,372,036,854,775,807   (for 64-bit Integers)

// INT_MIN is a macro that represents the minimum value or the lower limit of the integer data type.
// The value of INT_MIN is:
// INT_MIN = -2147483648   (for 32-bit Integers)
// INT_MIN = -9,223,372,036,854,775,808   (for 64-bit Integers)


// Applications:1. Check for Integer Overflow
//              2. Computing MIN and MAX values in an Array.
// When performing arithmetic operations, you can use INT_MAX and INT_MIN to check if the result exceeds the limits of the integer data type.