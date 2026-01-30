#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    // 1. String declaration
    string s = "Computer";

    // 2. length() / size()
    cout << "Length: " << s.length() << endl;

    // 3. at()
    cout << "Character at index 2: " << s.at(2) << endl;

    // 4. [] operator
    cout << "Character using []: " << s[3] << endl;

    // 5. append()
    string s1 = "Hello ";
    string s2 = "World";
    s1.append(s2);
    cout << "Append: " << s1 << endl;

    // 6. compare()
    string a = "abc";
    string b = "abc";
    if (a.compare(b) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    // 7. find()
    string str = "I love C++ programming";
    if (str.find("C++") != string::npos)
        cout << "Substring found" << endl;
    else
        cout << "Substring not found" << endl;

    // 8. replace()
    string r = "I like Java";
    r.replace(7, 4, "C++");
    cout << "Replace: " << r << endl;

    // 9. insert()
    string ins = "Helo";
    ins.insert(2, "l");
    cout << "Insert: " << ins << endl;

    // 10. erase()
    string e = "Hello";
    e.erase(1, 2);
    cout << "Erase: " << e << endl;

    // 11. substr()
    string sub = "Programming";
    cout << "Substring: " << sub.substr(3, 4) << endl;

    // 12. empty()
    string emp = "";
    if (emp.empty())
        cout << "String is empty" << endl;

    // 13. push_back()
    string pb = "Hi";
    pb.push_back('!');
    cout << "Push back: " << pb << endl;

    // 14. pop_back()
    pb.pop_back();
    cout << "Pop back: " << pb << endl;

    // 15. clear()
    string clr = "Clear me";
    clr.clear();
    cout << "After clear, length: " << clr.length() << endl;

    // 16. begin() and end()
    string it = "ABC";
    cout << "Using iterator: ";
    for (auto i = it.begin(); i != it.end(); i++)
        cout << *i << " ";
    cout << endl;

    // 17. Case conversion
    string cs = "HeLLo";
    for (char &c : cs)
        c = tolower(c);
    cout << "Lowercase: " << cs << endl;

    // 18. Count vowels, digits, alphabets
    string mix = "C++A123";
    int vowels = 0, digits = 0, alphabets = 0;

    for (char c : mix) {
        if (isdigit(c))
            digits++;
        else if (isalpha(c)) {
            alphabets++;
            c = tolower(c);
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels++;
        }
    }

    cout << "Alphabets: " << alphabets
         << " Digits: " << digits
         << " Vowels: " << vowels << endl;

    return 0;
}
