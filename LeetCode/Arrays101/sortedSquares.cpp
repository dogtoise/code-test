#include "../stdafx.h"

/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
*/


class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++)
		{
			nums[i] = pow(nums[i], 2);

		}
		sort(nums.begin(), nums.end());

		return nums;
	}
};