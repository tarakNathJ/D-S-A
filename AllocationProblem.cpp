#include <iostream>
#include <vector>
using namespace std;

bool AllocationProblem(vector<int> array, int size, int number, int mid)
{

    int Pagesum = 0;
    int countPerson = 1;
    for (int i=0 ;i < size ; i++){
        if(Pagesum + array[i] <= mid){
           Pagesum += array[i];
        }else{
            countPerson ++;
            if(countPerson > number || array[i] > mid ){
                return false;
            }
            Pagesum = array[i];
        }
    }

   return true;

}

int main()
{
    vector<int> array = {10,20,30,40};
    int sum = 0;
    for (int i = 0; i < array.size(); i++)
    {
        sum += array[i];
    }
    int start = 0;
    int end = sum;
    int mid = start + (end - start) / 2;
    int number = 2;
    int ans = -1;
    int size = array.size();

    while (start <= end)
    {
        if (AllocationProblem(array,size,number ,mid))
        {
            ans = mid;
            end = mid - 1;
        }else{
            start = mid +1;
        }

        mid = start + (end - start) / 2;

    }

    cout <<ans;

    return 0;
}