#include <iostream>
using namespace std;
class Stack {
private:
    int arr[5];
    int top;
public:
    Stack() {top=-1;}
    void peek(){
    if(top==-1){cout<<"stack empty\n"; return;}
    cout<<"Top element :"<<arr[top]<<endl;
    }
    void push(int value){
        if (top == 4){cout<<"Stack Overflow\n";return;}
        top++;
        arr[top] = value;
    }
    void pop(){
        if (top == -1){cout<<"Stack Underflow\n";return;}
        cout<<"Popped: "<<arr[top]<<endl;
        top--;
    }
    void display(){
        if (top == -1){cout<<"Stack is empty\n"<<endl;return;}
        cout<<"Stack elements: ";
        for(int i = top; i >= 0; i--){cout<<arr[i]<<" ";}
        cout<<endl;
    }
};
int main(){
Stack s;
int x;
for (int i=0; i<5; i++){
    cout<<"Enter element "<<i+1<<" : ";
    cin>>x; s.push(x);
}
s.display();
s.pop();
s.pop();
s.display();
s.peek();
return 0;
}
