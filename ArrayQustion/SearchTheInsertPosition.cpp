#include <iostream>

#include <vector>

using namespace std;
int AddOne(vector<int> array, int target)
{

    int cot =-1;

    for (int i = 0; i < array.size(); i++)
    {

        if (array[i] == target)
        {
            cot = i;
        }else if (array[i] > target)
        {
            return i;
        }
        
    }
    return cot;
}

int main()
{
    vector<int> arr = {
        1,
        2,
        57,
        68,
        453,
    };
    cout<<AddOne(arr, 66);
}