#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&stack,int cunt,int size){
    // base cash ...
    if(cunt == size/2){
        stack.pop();
        return;
    }

    // store value ..
    int value = stack.top();
    stack.pop();

    // recursive call..
    solve(stack,cunt+1,size);

    stack.push(value);

}
int main(){
    stack<int>newSt;
    newSt.push(90);
    newSt.push(80);
    newSt.push(40);
    newSt.push(10);
    newSt.push(30);
    newSt.push(590);


    solve(newSt,0,6);

    while(!newSt.empty()){
        cout<<newSt.top()<<" ";
        newSt.pop();
    }
    return 0;

}
