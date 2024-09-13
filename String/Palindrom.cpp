#include <iostream>

#include <vector>

using namespace std;

bool ReverseString(vector<char> arr, int size)
{
    int st = 0;
    int en = size - 1;
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
    vector<char> att = {'c'};
    bool chack = ReverseString(att, 1);
    cout << chack;
    return 0;
}