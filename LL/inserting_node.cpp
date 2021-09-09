#include<bits/stdc++.h>

using namespace std;

class Node{
  public:
    int data;
    Node* next;
};

void push(Node** href_head, int new_data){
    /* aloocating the nodes */
    Node* new_node = new Node();
    /* putting the data */
    new_node->data = new_data;
    /* making next of new node as the head */
    new_node->next = (*href_head);
    /* making new node as the head*/
    (*href_head) = new_node;
}

void inserAfter(Node* prev_node, int new_data){

    /* checking whether prev node is null  */
    if(prev_node == NULL){
        cout << "prev_node cannot be null";
        return;
    }

    /* Allocating the node */
    Node* new_node = new Node();
    /* putting the data */
    new_node -> data = new_data;
    /* prev node next is now new node next */
    new_node -> next = prev_node -> next;
    /* adding new_node as next to prev_node */
    prev_node -> next = new_node;
}

void append(Node* head, int new_data){
    /* allocation of new node */
    Node* new_node = new Node();
    
    /* adding last node */
    Node* last_node = head;
    
    /* putting the data*/
    new_node -> data = new_data;
    
    /* check if head next is null */
    if(head->next == NULL){
        head-> next = new_node;
        new_node->next = NULL;
    }
    else{
        while(last_node->next != NULL){
            last_node = last_node->next;
        }
        last_node ->next = new_node;        
        new_node-> next = NULL;
    }

}

void print(Node* n){
    while(n!=NULL){
        cout << n->data << " ";
        n = n-> next;
    }
}

int main()
{
  /* initialising the nodes */
/* Node* Head = NULL;
Node* First = NULL;
Node* Second = NULL; */


/* allocating nodes in a heap */
Node* Head = new Node();
Node* First = new Node();
Node* Second = new Node();
Node* Third = new Node();

/* putting the values in the heap */
Head -> data = 1;
Head -> next = First;

First -> data = 2;
First -> next = Second;

Second -> data = 3;
Second -> next = Third;

Third -> data = 4;
Third -> next = NULL;

push(&Head, 25);
inserAfter(Second, 26);
append(Head, 77);

print(Head);

}
