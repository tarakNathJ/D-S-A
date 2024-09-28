#include <iostream>

#include <vector>
#include <string>
using namespace std;

char MaxRpChar(string st)
{

    int arr[26] = {0};

    int number = 0;
    int max = 0;
    int index ;

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
        if (arr[i] > max)
        {
            max = arr[i];
            index  = i;
        }
    }

    return 'a' + index;
}

int main()
{

    string st = "tarAKKKak";
    cout<<MaxRpChar(st);
    return 0;
}