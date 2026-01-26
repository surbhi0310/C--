#include <iostream>
#include <cmath>
using namespace std;

bool IsArmstrongNum(int n) {
    int original = n;
    int temp = n;
    int count=0;
    int sum = 0;
    // count digits
    while (temp > 0) {
        count++;
        temp/=10;
    }
    // calculate Armstrong sum
    while (n>0){
    int ld = n % 10;
    sum += (int)pow(ld,count);//cast to int (pow() always returns double like 3^4=81.0 but we need int value here.)
    n/=10;
    }
    return sum==original;
}

int main() {
    int n;
    cin >> n;

    if (IsArmstrongNum(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}

// C Library - Math.h
// https://cplusplus.com/reference/cmath/#google_vignette