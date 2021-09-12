/* circular linked list */
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

/* traversal in circular linked list */
void print(Node* head){
    if(head){
    Node* node = head;
    do{
        cout << node->data << " ";
        node = node->next;
    }
    while(node != head);  
    } 
}

/* inserting at starting */
void push(Node** head, int new_data){
    /* allocation */
    Node* new_node = new Node();
    /* puting data */
    new_node->data = new_data;
    /* traveserse to find last element */
    Node* last = *head;
    while(last-> next != *head){
        last = last -> next;
    }
    last->next = new_node;
    new_node->next = *head;
    *head = new_node;
}

/* inserting after some element */
void inserAfter(Node* prev_node, int new_data){
    if(prev_node == NULL){
        cout << "It can't be null";
        return;
    }
    /* allotment & putting data */
    Node* new_node = new Node();
    new_node -> data = new_data;
    /* assigning new values */
    new_node-> next = prev_node-> next;
    prev_node-> next = new_node;
}

/* append */
void append(Node* head, int new_data){
    /* allotment */
    Node* new_node = new Node();
    new_node -> data = new_data;
    /* finding last element */
    Node* last = head;
    while(last->next != head){
        last = last -> next;
    }
    last->next = new_node;
    new_node->next = head; 
}

void Delnode(Node** head, int pos){
        Node* last = *head;
        Node* first = *head;
    if(pos == 0){
        
        while(last->next != *head){
            last = last -> next;
        }

       last-> next = first -> next;
       *head = first -> next;
       free(first);
    }
    /* finding prev element */
    else{
        for(int i=0; i<pos-1 && first != NULL; i++){
            first = first -> next; 
        }
         
            Node* next_node = first -> next ->next;
            next_node = first->next->next;
            free(first-> next);
            first-> next = next_node;
    }
    
}


int main(){

    Node* head = new Node();
    Node* f = new Node();
    Node* g = new Node();
    Node* h = new Node();

    head->data = 1;
    head->next = f;

    f -> data = 2;
    f -> next = g;
    
    g -> data = 3;
    g -> next = h;

    h -> data = 4;
    h-> next = head;

    push(&head,0);
    inserAfter(f, 30);
    
    append(head,5);
    Delnode(&head, 3);
    print(head);
    cout<<endl<<head->data;

}
