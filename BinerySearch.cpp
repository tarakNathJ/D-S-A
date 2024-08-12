#include <iostream>
using namespace std;

// write a program to simple binary search

int BinarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size ;
    // initial time calculate middle value
    int mid = start + (end - start) / 2;

    // start loop condiction is  end bigger then start
    while (end >= start)
    {
        // chack are key value present in middle index
        if (arr[mid] == key)
        {
            return mid;
        }

        // chack right part :- start at middle + 1 index
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        // chack left part :- start at zero index   bat end index  is middle -1
        if (arr[mid] > key)
        {
            end = mid - 1;
        }

        // update middle value
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int evenArray[] = {12, 24, 34, 88, 98, 100, 104};

    // to call the binary search program
    int index = BinarySearch(evenArray, 7, 104);

    // to print the index for searching value
    cout << "your key value index is: " << index;
}
