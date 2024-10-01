#include <iostream>

#include <vector>

using namespace std;

int Subset(vector<int> arr, int k)
{
	int i = 0, j = 0, count = arr[i], set = 0;

	while (j < arr.size())
	{
		if (count == k)
		{
			set++;
			count = count - arr[i];
			i++;
		}
		else if (count > k)
		{
			count = count - arr[i];
			i++;
		}

		else if ((j >= arr.size() - 1) && (count < k))
		{
			return set;
		}
		else if(count < k)
		{
			count = count + arr[++j];
		}
	}
	return set;
}
int main()
{
	vector<int> arr = {3, 4,3, 4, 7};
	cout << Subset(arr, 7);
	//  cout<<"ji";
	// cout << (3 == 3);
	return 0;
}