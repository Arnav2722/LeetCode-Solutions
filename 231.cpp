// 231. POWER OF TWO
/* Given an integer n, return true if it is a power of two.Otherwise, return false.

    An integer n is a power of two,
    if there exists an integer x such that n == 2x. */

#include <bits/stdc++.h>
using namespace std;

/* class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        for (int i = 0; i < 31; i++)
        {
            int ans = pow(2, i);
            if (ans == n)
            {
                return true;
            }
        }
        return false;
    }
};
 */
bool isPowerOfTwo(int n)
{
    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            cout << endl;
            return true;
            cout << endl;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n) << endl;
}