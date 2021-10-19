#include<bits/stdc++.h>

using namespace std;

int top = -1;
int stk[5];
int size = 5;

bool isFull(){
    if(top == size){
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

void push(int num){
    if(isFull()){
        cout << "stack is full";
    }
    else{
        top++;
        stk[top] = num;
    }
}

void pop(){
    if(isEmpty()){
        cout << "stack is empty";
    }
    else{
        stk[top] = 0;
        top--;
    }
}

void display(){
    for(int i=0;i<=top;i++){
        cout<<stk[i]<<" ";
    }
}

int main(){
    push(23);
    push(24);
    push(1);
    push(2);
    push(-5);
    pop();
    cout<< isEmpty() << endl;
    display();
}
