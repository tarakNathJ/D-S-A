#include <iostream>

#include <vector>

using namespace std;

vector<long long int> AddOne(vector<long long int> array)
{
    long long int number = 0;

    long long int reminder = 0;
    long long int End = 0, st = 0;
    for (double i = 0; i < array.size(); i++)
    {
        number = (number * 10) + array[i];
    }
    cout<<number<<endl;
    number += 1;
    
    array.clear();

    while (number != 0)
    {
        reminder = number % 10;
        array.push_back(reminder);
        number = number / 10;
    }

    End = array.size() - 1;

    while (st < End)
    {
        swap(array[st], array[End]);
        st++;
        End--;
    }

    return array;
}

int main()
{
    vector<long long int> arr = {7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6};

    arr = AddOne(arr);
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}