// 852. PEAK INDEX IN A MOUNTAIN ARRAY.
/* You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

    Return the index of the peak element.

    Your task is to solve it in O(log(n)) time complexity. */

#include <bits/stdc++.h>
using namespace std;

/* class Solution
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
 */
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

int main()
{
    vector<int> arr = {1, 3, 5, 6, 4, 2}; // Example input
    int peakIndex = peakIndexInMountainArray(arr);

    cout << "Peak Index: " << peakIndex << endl;
    cout << "Peak Element: " << arr[peakIndex] << endl;

    return 0;
}