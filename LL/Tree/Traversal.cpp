#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
}    
};

void preOrder(Node* root){
    if(root!=NULL){
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node* root){
    if(root!=NULL){
        preOrder(root->left);
        preOrder(root->right);

        cout << root->data << " ";
    }
}

void inOrder(Node* root){
    if(root!=NULL){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);

    }
}

int main(){
    struct Node* root = new Node(1);                                               
    struct Node* p1 = new Node(2);                          
    struct Node* p2 = new Node(3);                          
    struct Node* p3 = new Node(4);                          
    struct Node* p4 = new Node(5);                          

    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1-> right = p4;

    /*
        1 
      /   \ 
     2     3
    / \
   4  5

    */

    preOrder(root);
    cout <<endl;
    postOrder(root);
    cout <<endl;
    inOrder(root);
    }