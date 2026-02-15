// best optimal approach
#include <iostream>
using namespace std;

// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97...
bool isPrime(int n)
{
  if (n <= 1)
    return false;
  if (n == 2 || n == 3)
    return true;
  // Check whether n is divisible by 2 or 3
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  // Check from 5 to square root of n
  // Iterate i by (i+6)
  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}
// -------------------OR-----------------------
//optimal approach
bool IsPrime(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;

  return true;
}
int main()
{
  int n;
  cin >> n;
  if (isPrime(n))
    cout << "Prime";
  else
    cout << "Not Prime";
  if (IsPrime(n))
    cout << "Prime";
  else
    cout << "Not Prime";
  return 0;
}