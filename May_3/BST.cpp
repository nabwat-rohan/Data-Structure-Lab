#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

Node* insert(Node* root, int value) { if (root == NULL) { return new Node(value); }
if (value < root->data) {
    root->left = insert(root->left, value);
} else {
    root->right = insert(root->right, value);
}
return root;
}

bool search(Node* root, int key) {
if (root == NULL) return false;
if (root->data == key) return true;
if (key<root->data)
return search(root->left, key);
else
return search(root->right, key);
}

void inorderTraversal(Node* root) {
if(root == NULL) return;
inorderTraversal(root->left);
cout<<root->data<<" ";
inorderTraversal(root->right);
}

Node* findMin(Node* root) { while(root->left != NULL) { root = root->left; }
return root;
}

Node* deleteNode(Node* root, int key) {
if (root == NULL) return root;
// Step 1: Find the node
if (key < root->data) {
    root->left = deleteNode(root->left, key);
    }
else if (key > root->data) {
    root->right = deleteNode(root->right, key);
        }
else {
    // Node found

    // Case 1: No child
    if (root->left == NULL && root->right == NULL) {
        delete root;
        return NULL;
        }
    // Case 2: One child
    else if (root->left == NULL) {
        Node* temp = root->right;
        delete root;
        return temp;
            }
    else if (root->right == NULL) {
        Node* temp = root->left;
        delete root;
        return temp;
            }
    // Case 3: Two children
    else {
        Node* temp = findMin(root->right); // inorder successor
        root->data = temp->data;           // copy value
          root->right = deleteNode(root->right, temp->data);
        }
    }
return root;
}

int main(){
Node* tree1 = NULL;
// Inserting 8 values from user
for (int i=0; i<8; i++){
    int n;
    cout<<"Insert value "<<i+1<<": ";
    cin>>n;
    tree1 = insert(tree1, n);
}
// Display the values in inorder
cout<<"Inorder: ";
inorderTraversal(tree1);
// searching specific value
int s;
cout<<"\nEnter value to search: ";
cin>> s;
if(search(tree1, s)){cout<<"found";}
else cout<<"Not found";
// deleting specific value
int d;
cout<<"\nEnter value to delete: ";
cin>> d;
deleteNode(tree1, d);
// Display the updated values in inorder
cout<<"Updated Inorder: ";
inorderTraversal(tree1);
return 0;
}
