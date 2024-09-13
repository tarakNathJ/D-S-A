#include <iostream>

#include <vector>

using namespace std;

vector<char> ReverseString(vector<char> arr, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    return arr;
}

int main()
{
    vector<char> att = {'a', 'b', 'c', 'd', 'f'};
    att = ReverseString(att, 5);
    int i = 0;
    for (i = 0; att[i] != '\0'; i++)
    {
        cout << att[i]<<" ";
    }

    return 0;
}