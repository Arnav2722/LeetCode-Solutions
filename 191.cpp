// 191. Number of 1 bits

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hammingWeight(int n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};

// Trial 1

int hammingWeight(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1); // Removes the lowest set bit
        count++;
    }
    cout << count << endl;
}

int main()
{
    int n;
    cin >> n;
    int bits = hammingWeight(n);
}