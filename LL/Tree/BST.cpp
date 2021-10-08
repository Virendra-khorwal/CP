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

/* for searching in BST */
bool isPresent(Node* root, int num){
    if(root == NULL){
      return NULL;
    }
    if(root->data == num){
      return root;
    }
    else if(num > root->data){
      return isPresent(root->right, num);
    }
    else{
      return isPresent(root->left, num);
    }

}

/* for checking whether it is BST or not*/
int isBST(struct  Node* root){
    static struct Node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

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
   cout << isPresent(root, 4)<<endl; 
   cout<<isBST(root)<<endl;
    return 0;




}
