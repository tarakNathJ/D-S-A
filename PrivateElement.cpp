#include <iostream>
using namespace std;
// to solve a binary publem to : to find a pivat element in roted array
// input:[4,5,6,1,2,3]
// output  :6

int PrivateElement(int arr[], int size)
{
    int start = 0;
    int end = size;
    int mid = start + (end - start) / 2;

    // first process

    // while (start <= end)
    // {

    //     if(arr[start] == arr[end]) {
    //         return start;
    //     }
    //     else if(arr[start] > arr[mid]) {
    //         end = mid;
    //     }
    //     else if (arr[mid + 1] > arr[mid])
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         end = mid;
    //     }

    //      mid = start + (end - start) / 2;
    // }

    // second process

    while (start < end)
    {
        
        if (arr[mid] > arr[mid + 1])
        {
            return mid+1 ;
        }
        else if (arr[mid] < arr[mid + 1] && arr[mid] < arr[start])
        {
            end = mid;
        }
        else
        {
            start = mid;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    int arr[] = {40,55,66,1,9,10};
    int index = PrivateElement(arr, 6);
    cout << "your pivate element is " << index;

    return 0;
}