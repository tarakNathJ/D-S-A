#include <iostream>

#include <vector>

using namespace std;

vector<int> arrrm(vector<int> arr, vector<int> brr)
{
	int i = 0;
	int si = arr.size();
	int j = 0;
	int k = 0;
	int sim=0;
	while (j < brr.size())
	{
		

		if (arr[i] == brr[j])
		{
			arr.erase(arr.begin() + i);
			i = 0;
			j++;
		}
		else if (i == arr.size() - 1)
		{
			i = 0;
			brr.erase(brr.begin() + j);
		}
		else
		{
			i++;
		}
	}

	return brr;
}

int main()
{

	vector<int> arr1 = {1,2,3,6};
	vector<int> arr2 = {1,6};
	 arr2 = arrrm(arr1, arr2);
	 for (int i = 0; i < arr2.size(); i++)
	{
		cout << arr2[i] << " ";
	 }
	//cout << (arr2.empty() == true) << "heoo";
	return 0;
}