#include<iostream>
#include<string>
using namespace std;

int main() {
  string s = "Hello";
cout<<s.length()<<endl;
cout<<s.size()<<endl;


string s1 = "programming";
cout<<s1.find("gram");
}

//     string s = "welcome to geeksforgeeks";
//     char sub[] = "geeks";

//     // Loop that runs till string::find()
//     // returns string::npos
//     int res = -1;
//     while ((res = s.find(sub, res + 1)) !=
//             string::npos)
//         cout << res << " ";

//     return 0;
// }