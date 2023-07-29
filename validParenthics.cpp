#include<iostream>
#include<stack>
using namespace std;
bool mach(string &parenthiss,stack<char>p){

    
    for(int i=0; i<parenthiss.length();i++){
        char ch =parenthiss[i];
        if( ch == '('  || ch =='[' || ch =='{'){
                p.push(ch);

        }
        else{
                
            if(!p.empty()){
                char top = p.top();
                if(
                    ch ==']' && top =='[' ||
                    ch =='}' && top =='{'||
                    ch ==')' && top =='('
                    )
                {
                    p.pop();
                }
                else{
                    return false;
                    }

            }
            else{
                return false;
               }

         }

     }
    if (p.empty()) return true;
    else return false;
   
}


int main(){
    stack<char>p;
    string parenthiss = "{())}";

    cout<<"given string is valid "<<mach(parenthiss,p);



}
