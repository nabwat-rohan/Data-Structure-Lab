#include <iostream>
using namespace std;

struct StudentInfo{
    int id;
    char name[50];
};

// Linked List
struct ListNode {
    StudentInfo student;
    ListNode* next;
};

void insertAtBeginning(ListNode* &head, StudentInfo s) {
    ListNode* newNode = new ListNode;
    newNode->student = s;
    newNode->next = head;
    head = newNode;
}
void deleteStudent(ListNode* &head, StudentInfo s) {

    // Empty list
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    // Delete first node
    if (head->student.id == s.id) {
        ListNode* temp = head;
        head = head->next;
        delete temp;

        cout << "Deleted student with ID " << s.id << endl;
        return;
    }

    // Traverse list
    ListNode* current = head;

    while (current->next != NULL &&
           current->next->student.id != s.id) {
        current = current->next;
    }

    // Student not found
    if (current->next == NULL) {
        cout << "Student not found\n";
        return;
    }

    // Delete node
    ListNode* temp = current->next;
    current->next = current->next->next;

    delete temp;


}

void displayIDs(ListNode* head) {

    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    cout << "On waiting: ";

    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->student.id << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Stack
class Stack {
private:
    StudentInfo arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(StudentInfo s){
        if (top == 4){
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = s;
    }

    void display(){
        if (top == -1){
            cout << "no urgent req\n";
            return;
        }

        cout << "urgent req: ";

        for(int i = top; i >= 0; i--){
            cout << arr[i].id << " ";
        }

        cout << endl;
    }

    bool isempty(){
        return (top == -1);
    }

    void pop(){
        if (top == -1){
            cout << "Stack Underflow\n";
            return;
        }

        top--;
    }
};

// Queue
class Queue {
private:
    StudentInfo arr[5];
    int front;
    int rear;

public:
    Queue(){
        front = 0;
        rear = -1;
    }

    void enqueue(StudentInfo s) {
        if(rear == 4){
            cout << "Queue Overflow\n";
            return;
        }

        rear++;
        arr[rear] = s;
    }

    void dequeue(){
        if(rear < front){
            cout << "Queue Underflow\n";
            return;
        }

        front++;
    }

    bool isempty(){
        return (rear < front);
    }

    void display() {
        if(rear < front){
            cout << "no req\n";
            return;
        }

        cout << "normal req: ";

        for(int i = front; i <= rear; i++){
            cout << arr[i].id << " ";
        }

        cout << endl;
    }
};

// BST
struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;

    BSTNode(int value) {
        data = value;
        left = right = NULL;
    }
};
BSTNode* insertAtBST(BSTNode* root, int value) { if (root == NULL) { return new BSTNode(value); }
if (value < root->data) {
    root->left = insertAtBST(root->left, value);
} else {
    root->right = insertAtBST(root->right, value);
}
return root;
}
void inorderTraversal(BSTNode* root) {
if(root == NULL) return;
inorderTraversal(root->left);
cout<<root->data<<" ";
inorderTraversal(root->right);
}

int main(){

    StudentInfo students[5] = {
        {62, "Rohan"},
        {79, "Maliha"},
        {45, "Aman"},
        {122, "Rafid"},
        {66, "Ervin"}
    };

    ListNode* head = NULL;
    BSTNode* tree = NULL;
    Stack urgent;
    Queue normal;

    for(int i = 0; i < 5; i++){
        insertAtBeginning(head, students[i]);
        tree=insertAtBST(tree, students[i].id);
    }

    // Insert
    normal.enqueue(students[1]);
    urgent.push(students[2]);
    normal.enqueue(students[3]);
    urgent.push(students[4]);
    normal.enqueue(students[0]);

    displayIDs(head);
    normal.display();
    urgent.display();

    // processing urgent first
    while (!urgent.isempty()){
        urgent.pop();

    }

    //processing normal
    while (!normal.isempty()){
        normal.dequeue();

    }
    normal.display();
    urgent.display();
    cout<<"Inorder traversal of BST tree: "<<endl;
    inorderTraversal(tree);
    return 0;
}
