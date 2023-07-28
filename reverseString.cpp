#include <iostream>
#include <stack>

using namespace std;

int main()
{

    string str = "Tarak";

    stack<int> newStack;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        newStack.push(ch);
    }
    string ans = "";
    while (!newStack.empty())
    {
        char ch = newStack.top();
        ans.push_back(ch);
        newStack.pop();
    }

    cout << "answer is : - " << ans;
}