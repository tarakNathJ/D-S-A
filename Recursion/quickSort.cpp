#include <iostream>
#include <vector>

using namespace std;
int Pertiction(int arr[], int st, int en)
{
   
    int Pivot = arr[st];
    int count = 0;
    for (int i = st + 1; i < en; i++)
    {
        if (arr[i] <= Pivot)
        {
            count++;
        }
    }

    int RealPosiiton = st + count;
    swap(arr[RealPosiiton], arr[st]);

    int i = st, j = en;

    while (i < RealPosiiton && j > RealPosiiton)
    {
        while (arr[i] <= Pivot)
        {
            i++;
        }
        while (arr[j] > Pivot)
        {
            j--;
        }

        if (i < RealPosiiton && j > RealPosiiton)
        {
            swap(arr[i++],arr[j--]);
        }
    }



    return RealPosiiton ;
}

void quickSort(int arr[], int st, int en)
{

    if (st > en)
    {
        return;
    }

    int p = Pertiction(arr, st, en);
    

    quickSort(arr , st ,p-1);
    quickSort(arr ,p+1 ,en );
   
}

int main()
{
    int arr[] = {10,6,3,5,8,2};

    quickSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<"  ";
    }
}