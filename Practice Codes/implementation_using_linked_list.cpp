#include <iostream>
using namespace std;

class Queue {
    struct Node {
        int data;
        Node* next;
    };
    Node *front, *rear;
public:
    Queue() { front = rear = nullptr; }

    void enqueue(int val) {
        Node* newNode = new Node{val, nullptr};
        if (!rear)
            front = rear = newNode;
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (!front) {
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (!front) rear = nullptr;
        delete temp;
    }
    void start(){
        cout << "First Element: ";
        cout << front -> data << endl;
    }
    void last(){
        Node* temp = front;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        cout << "Value at Last Index: "<< temp -> data << endl;

    }
    void Isempty(){
        if(front == rear){
            cout << "Queue is Empty." << endl;
        }else{
            cout << "Queue is not Empty. " << endl;
        }
    }
    void display() {
        Node* temp = front;
        cout << "Queue: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    // q.dequeue();
    q.start();
    q.last();
    q.Isempty();
    q.display();
}
