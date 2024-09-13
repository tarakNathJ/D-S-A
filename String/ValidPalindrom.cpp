#include <iostream>

#include <vector>
#include <string>
using namespace std;

// to character are valid or not
bool ValidCase(char ch)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return true;
    return false;
}

// to character convert to lower case.
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

// chack string are palindrome

bool ChackPalindrome(string arr)
{
    int st = 0;
    int en = arr.length() - 1;
    while (st < en)
    {
        if (arr[st] != arr[en])
            return false;
        st++;
        en--;
    }

    return true;
}
int main()
{
    vector<char> arr = {'a', 'b', 'A', 'B', 'E', '9'};
    string st = "tA@r,aT#";
    string temp = "";
    // to store valid character..
    for (int i = 0; i < st.length(); i++)
    {
        if (ValidCase(st[i]))
        {
            temp.push_back(st[i]);
        }
    }

    // to convert lower case
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = ToLowerCase(temp[i]);
    }

    // to chack given string are palindrome
    cout << ChackPalindrome(temp);

    return 0;
}