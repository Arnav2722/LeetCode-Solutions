// 852. PEAK INDEX IN A MOUNTAIN ARRAY.
/* You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

    Return the index of the peak element.

    Your task is to solve it in O(log(n)) time complexity. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;

        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};