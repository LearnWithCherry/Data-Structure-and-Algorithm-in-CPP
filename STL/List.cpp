#include <bits/stdc++.h>
using namespace std;

int main() {
    list <int> l;

    l.push_back(10);
    l.push_front(20);
    cout << "\nBefore Delete: ";
    for(int i : l){
        cout << i << " ";
    }
    l.erase(l.begin());
    cout << "\nAfter delete: ";
    for(int i : l){
        cout << i << " ";
    }
    cout << "\nSize of list: " << l.size()<<endl;
    list <int> n(5,10);
    for(int i : n){cout << i << " ";}

    return 0;
}