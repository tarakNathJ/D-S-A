#include <iostream>

#include <vector>

using namespace std;

vector<int> counti(vector<int> arr)
{

	int i = 0;
	int j = 1;
	while (j < arr.size())
	{
		if (arr[i] == arr[j])
		{
			arr.erase(arr.begin() + j);
			
		}
		else
		{
			i++;
			j++;
		}
	}
	return arr;
}

int main()
{
	vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
	arr = counti(arr);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "  ";
	}
}