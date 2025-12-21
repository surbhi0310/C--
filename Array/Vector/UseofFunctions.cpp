#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> vec;
  vec.push_back(5);
  vec.push_back(52);
  vec.push_back(51);
  vec.push_back(65);
  vec.push_back(15);
  vec.push_back(50);
  vec.push_back(68);
  vec.pop_back();
  for(int i=0; i<vec.size();i++){
    cout<<vec[i]<<" ";
  }
  cout<<endl;
  cout<<vec[2]<<endl;
  cout<<vec.at(3)<<endl;
  cout<<vec.front()<<endl;
  cout<<vec.back()<<endl;

  cout<<vec.size()<<endl;
  cout<<vec.capacity()<<endl;

  //need to include header file for functions - algorithm
  sort(vec.begin(),vec.end());//Ascending order
  for(int i=0; i<vec.size();i++){
    cout<<vec[i]<<" ";
  }
  cout<<endl;
  sort(vec.rbegin(),vec.rend());//Descending order
  for(int i=0; i<vec.size();i++){
    cout<<vec[i]<<" ";
  }
}