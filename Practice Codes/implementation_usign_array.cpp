#include <iostream>
using namespace std;
class Queue{
    int* arr;
    int front;
    int rear; 
    int size;
    public:
        Queue(int n){
           arr = new int[n];
           size = n;
           front = rear = -1; 
        }

        bool isEmpty(){
            return front == -1;
        }

        bool isFull(){
            return rear == size-1;
        }

        void push(int value){
            if(isEmpty()){
                cout << "Pushed " << value  << " into the Queue." << endl;
                front = rear = 0;
                arr[0] = value;
            }else if(isFull()){
                cout << "Queue Overflow.";
            }else{
                rear = rear + 1;
                arr[rear] = value;
                cout << "Pushed " << value  << " into the Queue." << endl;
            }
        }

        void pop(){
            if(isEmpty()){
                cout << "Queue underflow.";
            }else{
                if(front == rear){
                cout << "Popped " <<arr[front]  << " from the Queue." << endl;
                    front = rear = -1;
                }else{
                cout << "Popped " << arr[front] << " from the Queue." << endl;
                    front = front + 1;
                }
                
            }
        }

        int head(){
            if(isEmpty()){
                cout << "Queue is Empty."<< endl;
                return -1;
            }else{
                cout << "Front in the Queue is: ";
                return arr[front];
            }
        }
        int end(){
            if(isEmpty()){
                cout << "Queue is Empty."<< endl;
                return -1;
            }else{
                cout << "Last in the Queue is: ";
                return arr[rear];
            }
        }
};
int main(){
    Queue Q(5);
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.pop();
    cout << Q.head()<<endl;
    cout << Q.end()<<endl;
    return 0;
}