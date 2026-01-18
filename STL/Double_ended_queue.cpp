#include <bits/stdc++.h>
using namespace std;

int main() {    
    deque <int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    cout << "Push back: " << endl;
    for(int i : dq){
        cout << i << " ";
    }
    cout << "\nPush front: " << endl;
    dq.push_front(5);
    for(int i : dq){
        cout << i << " ";
    }
    cout << "\nPop front & Back: " << endl;
    dq.pop_back();
    dq.pop_front();
    for(int i : dq){
        cout << i << " ";
    }
    cout << "\nFirst element: " << dq.at(0) << endl;
    cout << "first: " << dq.front() << endl;
    cout << "last: " << dq.back() << endl;
    cout << "empty: " << dq.empty() << endl;
    cout << "before erase: "<<dq.size() << endl;
    dq.erase(dq.begin(),dq.begin()+1);
    cout << "after erase: "<<dq.size() << endl;
    // dq.push_back(23);
    // dq.push_back(26);
    // dq.push_back(24);
    for(int i : dq){
        cout << i << " ";
    }
}