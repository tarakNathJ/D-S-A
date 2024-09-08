#include <iostream>

#include <vector>

using namespace std;

vector<int> TwoSum(vector<int> array, int target)
{

    vector<int> ans;

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[i] + array[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
        }
    }
}

int main()
{

    vector<int> arr = {3, 5, 4, 10};

    arr = TwoSum(arr, 9);
    cout << arr[0] << "  " << arr[1];
}