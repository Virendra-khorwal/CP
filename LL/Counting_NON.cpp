#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
      int data;
      Node* next;
};

void push(Node** href_head, int new_data){
    /* allocation */
    Node* new_node = new Node();
    /* putting data */
    new_node->data = new_data;
    /* placing*/
    new_node->next = (*href_head);
    *href_head = new_node;

}

int count(Node* head){
    if(head->next == NULL)return 0;
    else{
        return 1 + count(head->next);
    }
}

/* iterative approach */
bool search(Node* head, int no)
{
    while(head != NULL)
    {
        if(head->data == no){
            return true;
        }
        head = head->next;
    }
        return false;
}

/* bool search(struct Node* head, int x)(recursive approach) 
{ 
    // Base case 
    if (head == NULL) 
        return false; 
      
    // If key is present in current node, return true 
    if (head->data == x) 
        return true; 
  
    // Recur for remaining list 
    return search(head->next, x); 
}  */

void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    /* alloting nodes */

    Node* head = new Node();
    
    head -> data = 1;
    head -> next = NULL;
    push(&head, 25);
    push(&head, 23);
    push(&head, 24);
    push(&head, 266);
    cout<<search(head,24)<<endl;
    cout <<count(head)<<endl;

    print(head);

}