#include <iostream>

#include <vector>

using namespace std;

vector<int> reverse(vector<int> arr)
{

    int start = 0;
    int end = arr.size() -1;
 
    while (start <= end)
    {
        swap (arr[start] ,arr[end]);
        start++ ; end--;
    }

    return arr;
}

int main()
{
    vector <int>array = {12,34,1,24,56} ; 

    


    array =  reverse (array);

    for (int i = 0; i < array.size(); i++)
    {
        cout <<array[i] << "   " ; 
    }
    

    return 0;
}