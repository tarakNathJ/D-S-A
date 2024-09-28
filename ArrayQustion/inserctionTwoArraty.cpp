#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int Inserction(vector<int> arr1, vector<int> arr2)
{

	int i = 0;
	int j = 0;
	while ((i < arr1.size()) && (j < arr2.size()))
	{

		if (arr1[i] > arr2[j])
		{
			arr1.insert(arr1.begin() + i, arr2[j]);
			i++;
			j++;
		}
		else if (arr1[i] < arr2[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	while (j <= arr2.size() - 1)
	{
		arr1.push_back(arr2[j]);
		j++;
	}

	if (arr1.size() < 2)
	{
		return -1;
	}
	int sum = 0;
	for (int i = 1; i < arr1.size() - 1; i++)
	{
		sum = sum +arr1[i];	
	}
	return sum;
}

int main()
{
	vector<int> arr1 = {1,3};
	vector<int> arr2 = {2};
	int ar = Inserction(arr1, arr2);
	cout<<ar;

	//for (int i = 0; i < arr1.size(); i++)
	//{
	//	cout << arr1[i] << " ";
	//}

	return 0;
}