#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main() {

char str[] = "Computer";
cout << strlen(str);// length of string
cout<<endl;

char s1[20] = "Hello ";
char s2[] = "World";
strcat(s1, s2);
cout << s1;// concatenated string
cout<<endl;

char s3[] = "abc";
char s4[] = "abc";
if(strcmp(s3, s4) == 0)// comparing two strings
    cout << "Strings are equal";
else
    cout << "Strings are not equal";
cout<<endl;

char s5[] = "C++";
char s6[10];
strcpy(s6, s5);// copying string
cout << s6;
cout<<endl;

char str0[] = "programming";
char *p = strchr(str0, 'k');// finding character in a string
if(p)
    cout << "Character found";
else
    cout << "Not found";
cout<<endl;

char str1[] = "I love C++";
char sub[] = "C++";
if(strstr(str1, sub))// finding substring in a string
    cout << "Substring found";
else
    cout << "Substring not found";
cout<<endl;

// Additional string manipulations--------------------------
// Count occurrences of a character
char str2[] = "banana";
char ch = 'a';
int count = 0;
for(int i = 0; str2[i] != '\0'; i++)
    if(str2[i] == ch)
        count++;
cout << count;
cout<<endl;

// Replace character in a string
char str3[] = "cat";
for(int i = 0; str3[i] != '\0'; i++)
    if(str3[i] == 'c')
        str3[i] = 'b';
cout << str3;   // bat
cout<<endl;

// Insert character at a specific position
char str4[20] = "helo";
int pos = 2;
for(int i = strlen(str4); i >= pos; i--)
    str4[i+1] = str4[i];
str4[pos] = 'l';
cout << str4;
cout<<endl;

// Delete character from a specific position
char str5[] = "hello";
int pos1 = 1;
for(int i = pos1; str5[i] != '\0'; i++)
    str5[i] = str5[i+1];
cout << str5;
cout<<endl;

// Convert to uppercase
for(int i = 0; str5[i] != '\0'; i++){
    str5[i] = toupper(str5[i]);
    // str5[i] = tolower(str5[i]);
}
cout<<str5;
    // cout<<strupr(str5);
    // cout<<strlwr(str5);
cout<<endl;

// Check if alphanumeric
char ch1 = 'A';
if(isalnum(ch1))
    cout << "Alphanumeric";
else
    cout << "Not alphanumeric";
cout<<endl;

// Count alphabets and digits
char str6[] = "C++A123";
int v=0, d=0, a=0;
for(int i=0; str6[i]!='\0'; i++) {
    str6[i] = tolower(str6[i]);
    if(isdigit(str6[i])) d++;
    else if(isalpha(str6[i])){
      for(int ch:str6){
        if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
          v++;
        }
      }a++;
    }
    // else{
    //   cout<<"Symbol";
    // }
}
cout << "Alphabets:" << a << " Digits:" << d << " Vowels:"<<v;
cout<<endl;
  return 0;
}