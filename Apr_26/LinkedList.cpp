#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node ;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node ;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int countNodes(Node* head) {
    Node* temp = head;
    int count=0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

struct DoublyNode {
    int data;
    DoublyNode* prev;
    DoublyNode* next;
};

void insertAtDoublyEnd(DoublyNode* &head, int value) {
    DoublyNode* newNode = new DoublyNode();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    DoublyNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtDoublyBeginning(DoublyNode* &head, int value) {
    DoublyNode* newNode = new DoublyNode();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}
void displayDoubly(DoublyNode* head) {
    DoublyNode* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {
    Node* head1 = NULL;
    DoublyNode* head2 = NULL;
    insertAtBeginning(head1, 20);
    insertAtEnd(head1, 30);
    insertAtEnd(head1, 40);
    insertAtBeginning(head1, 10);
    insertAtEnd(head1, 50);
    display(head1);
    cout<<"Number of nodes: "<< countNodes(head1)<<endl;

    insertAtDoublyBeginning(head2, 70);
    insertAtDoublyEnd(head2, 80);
    insertAtDoublyEnd(head2, 90);
    insertAtDoublyBeginning(head2, 60);
    insertAtDoublyEnd(head2, 100);
    cout<<"Doubly Linked List (forward direction): "<<endl;
    displayDoubly(head2);
    return 0;
}
