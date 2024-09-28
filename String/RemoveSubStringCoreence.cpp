
#include <iostream>

#include <vector>
#include <string>
using namespace std;

// string Subwstring(string Re ,string path){
    
//     while ( Re.length() != 0 && Re.find(path) < Re.length())
//     {
//         Re.
//     }
    
// }

string Remo (string st ,string part){
        while (st.length() != 0 && st.find(part) <st.length())
        {
            st.erase(st.find(part) ,part.length());
        }

    return st;
        
}

int main()
{

    string st = "tomtomkon";
    string par = "tom";
    cout<< Remo(st,par) <<endl;

    
    return 0;
}