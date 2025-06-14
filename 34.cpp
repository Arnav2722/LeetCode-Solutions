// 34.Find first and last position of element in sorted array
/* Given an array of integers nums sorted in non - decreasing order, find the starting and ending position of a given target value.

    If target is not found in the array,
    return [ -1, -1 ].

    You must write an algorithm with
    O(log n) runtime complexity.
     */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstOcc(vector<int> &nums, int n, int key)
    {
        int s = 0, e = n - 1, mid, ans = -1;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (nums[mid] == key)
            {
                ans = mid;
                e = mid - 1; // Move left to find first occurrence
            }
            else if (nums[mid] < key)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }

    int lastOcc(vector<int> &nums, int n, int key)
    {
        int s = 0, e = n - 1, mid, ans = -1;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (nums[mid] == key)
            {
                ans = mid;
                s = mid + 1; // Move right to find last occurrence
            }
            else if (key > nums[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int key)
    {
        int first = firstOcc(nums, nums.size(), key);
        int last = lastOcc(nums, nums.size(), key);
        return {first, last};
    }
};
