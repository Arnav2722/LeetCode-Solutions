// 442. FIND ALL DUPLICATES IN AN ARRAY
/* Given an integer array nums of length n where all the integers of nums are in the range[1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

    You must write an algorithm that runs in
    O(n)
time and uses only constant auxiliary space, excluding the space needed to store the output */
#include <bits/stdc++.h>
    using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int temp = abs(nums[i]);

            if (nums[temp - 1] < 0)
            {
                ans.push_back(temp);
            }
            else
            {
                nums[temp - 1] *= -1;
            }
        }
        return ans;
    }
};