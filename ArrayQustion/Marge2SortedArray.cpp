#include <iostream>

#include <vector>

using namespace std;

vector<int> MrgeTwoArray(int arr[], int size1, int arr2[], int size2)
{
    vector<int> ans;
    int FirstArraySize = 0;
    int secondArraySize = 0;
    while (FirstArraySize < size1 && secondArraySize < size2)
    {
        if (arr[FirstArraySize] < arr2[secondArraySize])
        {
            ans.push_back(arr[FirstArraySize]);
            FirstArraySize++;
        }
        else
        {
            ans.push_back(arr2[secondArraySize]);
            secondArraySize++;
        }
    }

    while (size1 > FirstArraySize)
    {
        ans.push_back(arr[FirstArraySize]);
        FirstArraySize++;
    }

    while (size2 > secondArraySize)
    {
        ans.push_back(arr2[secondArraySize]);
        secondArraySize++;
    }

    return ans;
}

int main()
{

    int array1[] = {12, 34, 35, 45, 60,67,90};
    int array2[] = {11, 22, 36,55,62};
    vector<int> result = MrgeTwoArray(array1, 7, array2, 5);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "   ";
    }

    return 0;
}