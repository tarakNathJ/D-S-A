#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool know(vector<vector<int>> &m,int a,int b ){
    if(m[a][b]==1){
        return true;
    }
    else{
        return false;
    }

}
int celebrity(vector<vector<int>> &m ,int n){
    stack<int>st;
    // stap 1 : push all element
    for(int i=0 ; i<n;i++){
        st.push(i);
    }
    // stap 2 : gate two element compure them
    while (st.size()>1)
    {
        int a=st.top();
        st.pop();
        int b =st.top();
        st.pop();

        if(know(m,a,b)){
            st.push(b);
        }
        else{
            st.push(a);
        }
    }
    int ans = st.top();
    // stap 3 : single element in stack is potential
    // so verify

    // check in row ..
    bool rowcheck(false);
    int zerocount =0;
    for(int i =0;i<n;i++){
        if(m[ans][i]==0){
            zerocount++;
        }
    }
    if (zerocount == n)
    {
        rowcheck=true;
    }
    // column check 
    bool colcheck = false;
    int onecount = 0;
    for(int i=0 ;i<n;i++){
        if(m[i][ans]==1){
            onecount++;
        }

    }
    if(onecount == n-1){
        colcheck =true;
    }
    if (rowcheck ==true && colcheck ==true){
        return ans;
    }
    else {
        return -1;
    }


}



int main(){
    vector<std::vector<int>>arr={
        {0,1,0},
        {0,0,0},
        {0,1,0},
        };
    celebrity(arr,3);
    return 0;
}
