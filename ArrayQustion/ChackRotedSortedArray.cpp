#include <iostream>

#include <vector>

using namespace std;

bool ChackRotedSortedArray(vector<int> array)
{
    int count = 0;

    for (int i = 1; i < array.size(); i++)
    {

        if (array[i - 1] > array[i])
        {
            count++;
        }
    }

    if ( array[array.size() - 1] > array[0])
    {
        count++;
    }

        return count <= 1;
}

int main()
{

    vector<int> arr = {2,3,56,4,5};
     cout<<ChackRotedSortedArray(arr) <<"  ";

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << "  ";
    // }


    return 0;
}