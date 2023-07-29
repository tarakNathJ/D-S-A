#include <iostream>
#include <stack>
using namespace std;

bool chackRedendent(string st){
    stack<char>stack;
    char ch;
    for( int i=0 ; i<st.length();i++){
        ch =st[i];
        if(st[i] =='(' ||
            st[i] =='-'||
            st[i] =='+' ||
            st[i] =='*' ||
            st[i] =='/'
            ){
                
                stack.push(ch);
            }

        else{
            if(ch ==')'){
                bool redundent = true;
                while (stack.top() !='(')
                {
                    char top = stack.top();
                    if(st[i] =='-'||
                        st[i] =='+' ||
                        st[i] =='*' ||
                        st[i] =='/'){
                            redundent =false;

                        }
                        stack.pop();
                }
                if(redundent == true)
                    return true;
                stack.pop();
            }

        }
    }

    return false;
}

int main(){
    string s ="(1+2)" ;
    cout<<chackRedendent(s);


}
