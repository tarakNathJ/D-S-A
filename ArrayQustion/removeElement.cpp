#include <iostream>

#include <vector>

using namespace std;

vector<int> removeElement(vector<int> nums, int val)
{
	int count = 0;

	int i = 0;
	int j = nums.size() - 1;
	while ((i < nums.size()) && (i < j))
	{
		if (nums[i] != val)
		{
			i++;
		}
		else if (nums[j] == val)
		{
			j--;
		}
		else if (i < j)
		{
			swap(nums[i], nums[j]);
		}
	}
	count =nums.size() - j;
	i =0;
	while (i< count)
	{
		nums.pop_back();
		i++;
	}
	
	
	return nums;
}

int main()
{
	vector<int> array = {0,1,2,2,3,0,4,2};
	// removeElement(array ,9);
	array = removeElement(array, 2);
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << "  ";
	}
	return 0;
}