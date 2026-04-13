#include <iostream>
using namespace std;
class Queue{
private:
    int arr[5];
    int front;
    int rear;
public:
    Queue(){
    front=0;
    rear=-1;
    }
    void enqueue(int value) {
        if(rear == 4){cout << "Queue Overflow\n";}
        else{rear=rear+1; arr[rear] = value;}
    }
    void dequeue(){
        if(rear<front){cout<<"Queue Underflow\n";}
        else{cout<<"Removed: "<<arr[front]<<endl; front++;}
    }
    void peek(){
        if(rear<front){cout<<"Queue is empty\n";}
        else{cout<<"Front element: "<<arr[front]<<endl;}
    }
    void display() {
        if(rear<front){
            cout<<"Queue is empty\n";}
        else{cout<<"Queue elements: ";
        int i = front;
        while(i<=rear){
            cout<<arr[i]<<" ";
            i++;
        }
        cout<<endl;
    }
    }
};

int main(){
Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.dequeue();
q.dequeue();
q.display();
q.peek();
return 0;
}
