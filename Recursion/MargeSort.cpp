#include <iostream>
#include <vector>

using namespace std;

void MargeTwoArray(int arr[], int st, int en)
{
    int mid = (st + en) / 2;
    int len1 = mid - st + 1;
    int len2 = en - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    // copy value
    int MidArrayIndex = st;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[MidArrayIndex++];
    }
    MidArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[MidArrayIndex++];
    }

    int index = 0;
    int index2 = 0;
    MidArrayIndex = st;

    while (index < len1 && index2 < len2)

    {
        if (first[index] < second[index2])
        {
            arr[MidArrayIndex++] = first[index++];
        }
        else
        {
            arr[MidArrayIndex++] = second[index2++];
        }
    }

    while (index < len1)
    {
        arr[MidArrayIndex++] = first[index++];
    }
    while (index2 < len2)
    {
        arr[MidArrayIndex++] = second[index2++];
    }
}

// Marge sort

void marge_sort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    marge_sort(arr, start, mid);
    marge_sort(arr, mid + 1, end);

    MargeTwoArray(arr, start, end);
}

int main()
{

    int arr[] = {1, 43,34,57, 4, 2};
    
    marge_sort(arr, 0, 6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<"  ";
    }
    


    return 0;
}