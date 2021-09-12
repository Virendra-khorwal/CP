#include <bits/stdc++.h>

using namespace std;

class Node{
  public:
    int data;
    Node* next;
    Node* prev;
};

void push(Node** head, int new_data){
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = *head;
    new_node->prev = NULL;

    (*head)->prev = new_node;
    (*head) = new_node;
}

void inserAfter(Node* Prev_node, int data) {
    if(Prev_node == NULL){
        cout << "it can't be NULL" << endl;
        return;
    }
    
    /* alloting the node */
    Node* new_node = new Node();

    /* inserting the data */
    new_node->data = data;

    Prev_node->next->prev = new_node;
    new_node->next = Prev_node->next;
    Prev_node->next = new_node;

}

void append(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    Node* last = *head_ref; /* used in step 5*/
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. This new node is going to be the last node, so
        make next of it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new
        node as head */
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
 
    /* 7. Make last node as previous of new node */
    new_node->prev = last;
 
    return;
}

void delNode(Node** href_head, int pos){
    /* finding whether ll is null*/
    if(*href_head == NULL)return;
    /* if deleting node is head of list*/
    
     Node* temp = *href_head;

    if(pos == 0){
        *href_head = temp->next;
        (*href_head)->prev = NULL;
        free(temp);
        return;
    }

    else{

        for(int i=0; temp!=NULL && i<pos; i++){
            temp = temp->next;
        }
        Node* prevv = temp->prev;
        Node* nextt = temp->next;

        /* here temp is the node which is to be deleted */
        if(temp == NULL || temp->next == NULL){
            return;
        }
        /* Store pointer to next of the node to be deleted */
        prevv->next = temp->next;

        /* free the node to be deleted*/
        free(temp);

        /* Link prev and next node*/
        nextt->prev = prevv;
    }    
}

void Print(Node* n){
    while(n!= NULL){
        cout << n->data << " ";
        n = n->next;
    }
}


int main(){
    Node* Head = new Node();
    Node* Second = new Node();
    Node* Third = new Node();
    Node* Forth = new Node();


    Head->data = 1;
    Head->next = Second;
    Head->prev = NULL; 

    Second->data = 2;   
    Second->next = Third;
    Second->prev = Head;

    Third->data = 3;
    Third->next = Forth;
    Third->prev = Second;

    Forth->data = 4;
    Forth->next = NULL;
    Forth->prev = Third;

    append(&Head, 40);
    delNode(&Head, 4);

    
    Print(Head);
}
