#include <iostream>

#include <vector>

using namespace std;

vector<int> MoveZero(vector<int> array)
{
    int end = array.size(), start = 0;
    int i = 0;
    for (int J = 0; J < end; J++)
    {

        if (array[J] != 0)
        {
            swap(array[i], array[J]);
            i++;
        }
    }

    return array;
}
int main()
{
    vector<int> array = {12, 0, 0, 24, 56, 0, 12, 0};

    array = MoveZero(array);

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << "   ";
    }
    return 0;
}