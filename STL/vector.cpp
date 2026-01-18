#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> a;
    cout << a.capacity() << endl;

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    cout << a.capacity() << endl; //  total elements
    int ele = a.size(); // space assigned in array
    for(int i=0; i<ele; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << a[2] << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    // cout << a.capacity() << endl;
    a.pop_back();
    a.pop_back();
    // cout << a.capacity() << endl;
    cout << a.size() << endl;
    for(int i : a){
        cout << i << " ";
    }


}