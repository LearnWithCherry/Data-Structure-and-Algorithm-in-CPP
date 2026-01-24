#include <iostream>
#include<stack>
using namespace std;
void deleteMiddle(stack<int>& s, int count, int size){
    if(count == size/2){
        s.pop();
        return;
    }
    int topElement = s.top();
    s.pop();
    deleteMiddle(s,count+1,size);
    s.push(topElement);
}
int main() {
    stack<int> s;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)s.push(arr[i]);
    deleteMiddle(s,0,s.size());
    cout << "Stack after deleting element: " ;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}                                   