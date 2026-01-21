#include <iostream>
#include <string>
using namespace std;
int main(){
  string str1 = "Hello, ";
  string str2("World!");

  str1.append(" ").append(str2);
  // string str3 = str1 + str2;
  cout << str1 << endl;


  cout<<str1.empty();
  cout<<endl;
  cout << "Length using length(): " << str1.length() << "\n";
  // cout << "Length using size(): " << str1.size() << "\n";
  cout<<endl;
  cout << "s[1] = " << str1[1] << "\n"; // 'e'
  cout << "s.at(4) = " << str1.at(4) << "\n"; // 'o'
 cout<<endl;
  cout << "First character (front): " << str1.front() << "\n";
cout << "Last character (back): " << str1.back() << "\n";
cout<<str1.compare(str2);
  return 0;

}