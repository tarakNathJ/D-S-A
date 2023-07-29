#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>&stack,int element){
    // base case  
    if(stack.empty()){
        stack.push(element);
    }

    int value = stack.top();

    // recursive call
    insertAtBottom(stack,element);

    stack.push(value);

}


void reverseStack(stack<int>&stack){
    // base case ..
    if(stack.empty())
    { 
        return ;
    }
    

    // stack top value store 
    int element = stack.top();


    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtBottom( stack,element);

}


int main(){
    stack<int>stack;
    stack.push(68);
    stack.push(38);
    stack.push(64);
    stack.push(6);
    stack.push(608);

    reverseStack(stack);

   

}
