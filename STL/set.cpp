#include <bits/stdc++.h>
using namespace std;

int main() {
    set <int> s;
    s.insert(20);               
    s.insert(10);               
    s.insert(50);
    s.insert(40);               
    s.insert(30);               
    for(auto i : s){
        cout << i << " ";
    }   
    cout << endl;
    s.erase(s.begin());
    for(auto i : s){
        cout << i << " ";
    }  
    cout << endl; 
    cout << "30 Present in the List: "<<s.count(30);
    
    return 0;
}