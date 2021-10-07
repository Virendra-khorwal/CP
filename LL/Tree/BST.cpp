#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;

    /* for initialization using node function */

    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

void inOrder(struct Node* root){
  if(root!=NULL){
  inOrder(root->left);
    cout << root->data << " "; 
  inOrder(root->right);
  }
}

int main(){
    /* root node */
    struct Node* root = new Node(5);
      /* following is the tree after above statement
 
             4
            / \
          NULL NULL
    */
   root->left = new Node(3);
    root->right = new Node(6);
    /* 1 and 6 become left and right children of 4
                    4
                  /    \
                 1       6
               /  \     /  \
            NULL NULL  NULL NULL
    */
 
    root->left->left = new Node(1);
    root->left->right = new Node(4);

    /* 5 & 2 becomes left & right child of 1
               5
            /     \
           3     6
          / \     / \
         5   4 NULL NULL
        / \
     NULL NULL
    */

   inOrder(root);

    return 0;




}
