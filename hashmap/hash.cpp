#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    //creation of a map
    // unordered_map<string,int> m; //unordered map
    map<string,int> m; //ordered map

    //insertion
    pair<string,int> p = make_pair("babbar", 3);
    m.insert(p);

    pair<string,int> p2("love", 2);
    m.insert(p2);

    m["my"] = 1;
    m["my"] = 2; //update the value of key "my"

    //search
    cout<<m["my"]<<endl;
    cout<<m.at("my")<<endl;

    // cout<<m.at("unknown")<<endl; //this will throw an exception because "unknown" key is not present in the map
    cout<<m["unknown"]<<endl; //this will create a new key "unknown" with value 0
    cout<<m.at("unknown")<<endl; //this will print 0

    //size
    cout<<m.size()<<endl;
    
    //to check existence
    cout<<m.count("love")<<endl;
    
    m.erase("love");
    cout<<m.size()<<endl;

    //print/traverse
    //(general method)
    for(auto it:m){
      cout<<it.first<<" "<<it.second<<endl;
    }
    
    //using iterator
    // unordered_map<string,int> :: iterator it = m.begin();//order doesn't matter in unordered_map
    // while(it!=m.end()){
    //   cout<<it->first<<" "<< it->second<<endl;
    //   it++;
    // }
    map<string,int> :: iterator it = m.begin(); //order matters in ordered map
    while(it!=m.end()){
      cout<<it->first<<" "<< it->second<<endl;
      it++;
    }


    
    return 0;

}