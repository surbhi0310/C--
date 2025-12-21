#include <iostream>
using namespace std;
int main()
{
  int a;
  int b;
  int c;
  cout << "Enter three numbers: ";
  cin >> a;
  cin >> b;
  cin >> c;
  if (a > b)
  {
    if (a > c)
    {
      cout << a << " is the greatest number.";
    }
    else
    {
      cout << c << " is the greatest number.";
    }
  }
  else
  {
    if (b > c)
    {
      cout << b << " is the greatest number.";
    }
    else
    {
      cout << c << " is the greatest number.";
    }
  }
}