
#include <iostream>

#include <vector>
#include <string>
using namespace std;

char ToLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

string RemoveRepitation(string st)
{
    int arr[26] = {0};
    int number = 0;
    string temp = "";
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] >= 'a' && st[i] <= 'z')
        {
            number = st[i] - 'a';
        }
        else
        {
            number = st[i] - 'A';
        }
        arr[number]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= 1)
        {
            temp.push_back('a' + i);
        }
    }
    return temp;
}
int main()
{

    string st = "tomtomkon";
    for (int i = 0; i < st.length(); i++)
    {
        st[i] = ToLowerCase(st[i]);
    }


    cout<<RemoveRepitation(st);
   
    return 0;
}