#include <iostream>

#include <vector>

using namespace std;

vector<int> RotedArray(vector<int> array, int key)
{

    vector<int> tempArray(array.size());

    for (int i = 0; i < array.size(); i++)
    {
        tempArray[(i + key) % array.size()] = array[i];
    }

    return tempArray;
}

int main()
{
    vector<int> arr = {1, 23, 4, 5, 35, 67};
    arr = RotedArray(arr, 3);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}