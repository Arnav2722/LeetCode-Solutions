/* Approach : Count the frequency of each character in the string.

           Separate the characters based on whether their frequency is odd or
    even.

        Track :

    The maximum frequency among characters with odd frequency.

    The minimum frequency among characters with even frequency.

    Return max_odd -
        min_even. */

/* Step 1 : Frequency Counting
             We count how many times each character appears using a fixed -
         size array of size 26(since there are 26 lowercase letters).

         Step 2 : Classify Frequencies We iterate through the frequency array :

    If the frequency is odd,
    track the maximum among all such frequencies.

    If the frequency is even,
    track the minimum among all such frequencies.

        Step 3 : Return the Difference
                 Once we have :

    maxOdd → the largest frequency among odd
        - frequency characters

        minEven → the smallest frequency among even
        - frequency characters We return :

    diff =
        maxOdd
        − minEven
    diff = maxOdd−minEven */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDifference(string s)
    {
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        int maxOdd = INT_MIN;
        int minEven = INT_MAX;

        for (int f : freq)
        {
            if (f == 0)
                continue;
            if (f % 2 == 1)
            {
                maxOdd = max(maxOdd, f);
            }
            else
            {
                minEven = min(minEven, f);
            }
        }

        // Return the maximum difference
        return maxOdd - minEven;
    }
};
