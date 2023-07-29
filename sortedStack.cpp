#include<iostream>
#include<stack>
using namespace std;


void sortedInsert(stack<int> &sort,int ele){
    // base case..
    if((sort.empty()) || (sort.top() < ele)){
        sort.push(ele);
        return;
    }

    int value = sort.top();
    sort.pop();

    // recursive call
    sortedInsert(sort,ele);

    sort.push(value);



}

void solve(stack<int> &stack){
    // base case
    if (stack.empty())
    { 
        return ;
    }

    int element = stack.top();
    stack.pop();
     // recursive call
    solve(stack);

    sortedInsert(stack,element);


}


int main(){
    stack<int>S;
    S.push(12);
    S.push(32);
    S.push(1);
    S.push(-12);
    S.push(-1);
    solve(S);
}
