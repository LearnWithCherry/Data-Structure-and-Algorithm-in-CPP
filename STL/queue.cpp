#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout <<"\nSize: " << q.size();
    return 0;
}