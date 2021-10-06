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

void preOrder(struct Node* root){
  if(root!=NULL){
  cout << root->data << endl;

  preOrder(root->left); 
  preOrder(root->right);
  }
}

int main(){
    /* root node */
    struct Node* root = new Node(4);
      /* following is the tree after above statement
 
             4
            / \
          NULL NULL
    */
   root->left = new Node(1);
    root->right = new Node(6);
    /* 1 and 6 become left and right children of 4
                    4
                  /    \
                 1       6
               /  \     /  \
            NULL NULL  NULL NULL
    */
 
    root->left->left = new Node(5);
    root->left->right = new Node(2);

    /* 5 & 2 becomes left & right child of 1
               4
            /     \
           1      6
          / \     / \
         5   2 NULL NULL
        / \
     NULL NULL
    */

   preOrder(root);

    return 0;




}
