#include <iostream>
#include <vector>

using namespace std;
// write a program  to create a sorted array and search total accerence of given  key 


// ******************** source code********************

// first part of this problem
int firstPart(int arr[], int n, int key)
{

    int start = 0;
    int end = n;
    // initial time calculate middle value
    int mid = start + (end - start) / 2;

    // start loop condiction is  end bigger then start
    while (start <= end)
    {
        // first conidiction to chack : middle element are first accerance to serching key
        if (arr[mid] == key && (arr[mid - 1] < key || mid - 1 <= start))
            return mid;

        // second  conidiction to chack : middle element are serching key and [middle + 1] index is same serching key
        else if (arr[mid] == key && arr[mid - 1] == key)
        {
            end = mid - 1;
        }

        // chack right part :- start at middle + 1 index and end is same
        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        // chack left part :- start at zero index   bat end index  is middle -1
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        // update the middle value
        mid = start + (end - start) / 2;
    }
    // or key are not exist
    return -1;
}

// second part of this problem
int SecondPart(int arr[], int n, int key)
{

    int start = 0;
    int end = n;
    // initial time calculate middle value
    int mid = start + (end - start) / 2;

    // start loop condiction is  end bigger then start
    while (start <= end)
    {
        // first conidiction to chack : middle element are first accerance to serching key
        if (arr[mid] == key && (arr[mid + 1] > key || mid + 1 > end))
            return mid;

        // second  conidiction to chack : middle element are serching key and [middle + 1] index is same serching key
        else if (arr[mid] == key && arr[mid + 1] == key)
        {
            start = mid + 1;
        }

        // chack right part :- start at middle + 1 index and end is same
        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        // chack left part :- start at zero index   bat end index  is middle -1
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        // update the middle value
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int array[11] = {1, 2, 2, 2, 4, 4, 5, 5, 5, 5, 6};

    int firsrAccerance = firstPart(array, 11, 2);
    int LastAccerance = SecondPart(array, 11, 2);
    
    if ( LastAccerance == firsrAccerance && (LastAccerance != -1 && firsrAccerance != -1)){
        cout <<"total number of accerance is "<< 1;
    }
    else if (LastAccerance == -1 && firsrAccerance == -1)
    {
      cout <<"total number of accerance is "<< 0;
    }
    else{
        cout <<"total number of accerance is "<< (LastAccerance -firsrAccerance) +1 ;
    }
    

    return 0;
}