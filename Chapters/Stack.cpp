//STACK:

#include<bits/stdc++.h>
using namespace std;

const int Max=5;
int Stack[Max];
int top=-1; //-1 means the stack is empty, 0 means the stack contains only one element, 1 means stack contains two elements and so on

//before pushing the new element in the stack we have to check whether the stack is full or not using isfull fn.
bool isfull() {
    return top==Max-1;   //max-1 is the highest index of the any stack
}

//PUSH:
void push(int data){
    if(!isfull()){
        top++;
        Stack[top]=data;
    }
    else{
        cout<<"Overflow"<<endl;
    }
}



//before poping we have to check even the stack is empty or not
bool isempty(){
    return top==-1;
}

//POP:
int pop(){
    if(!isempty){
        int data=Stack[top];
        top--;
    }
    else{
        cout<<"Underflow"<<endl;
        return -1;   //Return a sentinel value indicating error
    }
}

int main(){
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

   return 0;
}