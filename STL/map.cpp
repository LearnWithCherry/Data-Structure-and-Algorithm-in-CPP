#include <bits/stdc++.h>
using namespace std;

int main() {
    map <int, string> m;
    m[1] = "Rajat";  
    m[2] = "Bhardwaj";  
  
    for(auto i : m){
        cout << i.first << " : " << i.second <<endl;
    }
    return 0;
}