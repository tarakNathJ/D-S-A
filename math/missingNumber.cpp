

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int missingNumber(vector<int> nums)
{
	long long int add = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		add += nums[i];
	}
	long long int sum = nums.size() * (nums.size() + 1);
	return sum - add;
}

int main()
{
//this is perfect soluction
}