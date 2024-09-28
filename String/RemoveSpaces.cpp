#include <iostream>

#include <vector>
#include <string>
using namespace std;
string STR(string st)
{
    string temp = "";
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] != ' ')
        {
            temp.push_back(st[i]);
        }
        else
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
    }
    return temp;
}
int main()
{

    string st = "tom go ran";

    cout << STR(st);
    return 0;
}