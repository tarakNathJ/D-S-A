#include <iostream>

#include <vector>

using namespace std;

vector<int> AddOne(vector<int> array, int val)
{
    int i = 0, e = array.size() - 1;
    
    while (i < e)
    {
        if (array[i] == val && array[e] != val)
        {
            swap(array[i], array[e]);
            i++, e--;
           
        }
        else if (array[i] != val)
        {
            i++;
        }
        else if (array[e] == val)
        {
            e--;
           
        }
    }

    for (int i = 0; i < array.size(); i++)
    {

        if (array[array.size() - 1] == val)
        {
            array.pop_back();
        }
    }

    return array;
}

int main()
{

    vector<int> arr = { 2, 2};

    arr = AddOne(arr, 2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}