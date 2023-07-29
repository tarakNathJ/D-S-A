
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int>arr,int n){

    stack<int>st;
    st.push(-1);
    vector<int>ans;
    for(int i= arr[n-1]; i>=0;i--){
        int curr = arr[i];
        while(st.top()>=curr){
            st.pop();
        }
        // answer is top in stack
        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}


int main()
{
    vector<int>st;
    st.push_back(90);
    st.push_back(9);
    st.push_back(90);
    st.push_back(10);
    st.push_back(40);
    st.push_back(0);
    st.push_back(7);

    nextSmallerElement(st,7);
   

}
