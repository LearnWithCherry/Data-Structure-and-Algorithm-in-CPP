#include <iostream>
using namespace std;
class stack{
    int* arr;
    int size;
    int top;
    public:
    
    bool flag;
    stack(int s){
        flag = 1;
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value){
        if(top == size-1){
            cout << "Stack overflow.."<< endl;
            return;
        }else{
            top++;
            arr[top] = value;
            cout << "Value " << value << " Pushed into the Stack." << endl;
            flag = 0;
        }
    }
    void pop(){
        if(top == -1){
            cout << "Stack is Underflow." << endl;
            return;
        }else{
            cout << "Element " << arr[top] << " Popped from the stack." << endl;
            top --;
            if(top == -1){
                flag = 1;
            }
        }
    }
    int peek(){
        if(top == -1){
            cout << "Stack is Underflow." << endl;
        }else{
            cout << "Top Elements in the stack is: ";
            return arr[top];
        }  
    }
    bool isEmpty(){
        return top == -1;
    }
    int isSize(){
        return top+1;
    }
};
int main() {
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    int value = s.peek();  
    if(s.flag == 0){
        cout << value << endl;
    }     
    cout << s.isEmpty() << endl;
    cout << s.isSize() << endl;
    return 0;
}