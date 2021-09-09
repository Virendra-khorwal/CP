#include <bits/stdc++.h>

using namespace std;

class Node{
  public:
    int data;
    Node* next;

};

void inserAfter(Node* Prev_node, int data) {
    if(Prev_node == NULL){
        cout << "it can't be NULL" << endl;
        return;
    }
    
    /* alloting the node */
    Node* new_node = new Node();

    /* inserting the data */
    new_node->data = data;

    new_node ->next = Prev_node->next;
    Prev_node->next = new_node;
}

void delNode(Node** href_head, int pos){
    /* finding whether ll is null*/
    if(*href_head == NULL)return;
    /* if deleting node is head of list*/
    
     Node* temp = *href_head;

    if(pos == 0){
        *href_head = temp->next;
        free(temp);
        return;
    }

    else{

        for(int i=0; temp!=NULL && i<pos-1; i++){
            temp = temp->next;
        }

        /* here temp-> is the node which is to be deleted */
        if(temp == NULL || temp->next == NULL){
            return;
        }
        /* Store pointer to next of the node to be deleted */
        Node* nextt = temp->next->next;

        /* free the node to be deleted*/
        free(temp-> next);

        /* Link prev and next node*/
        temp->next = nextt;
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

    Second->data = 2;   
    Second->next = Third;

    Third->data = 3;
    Third->next = Forth;

    Forth->data = 4;
    Forth->next = NULL;

    inserAfter(Third, 5);
    
    delNode(&Head,2);
    
    Print(Head);
}
