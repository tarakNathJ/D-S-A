#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
vector<int> Sneaky(vector<int> Num)
{
	map<int, int> mpp;
	for (int i = 0; i < Num.size(); i++)
	{
		mpp[Num[i]]++;
	}
	vector<int> ans;
	for (auto it : mpp)
	{
		if (it.second > 1)
		{
			ans.push_back(it.first);
		}
	}
	return ans;
}

int main()
{
	vector<int> arr = {12, 3, 4, 6, 3, 4};
	arr =Sneaky (arr);
	for (auto index : arr)
	{
		cout<<index<<"  ";
	}

	return 0;
}