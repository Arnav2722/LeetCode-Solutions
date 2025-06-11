// 1281. SUBTRACT THE PRODUCT AND SUM OF DIGITS OF AN INTEGER

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int prod = 1;
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;

            n = n / 10;
        }
        int answer = prod - sum;
        return answer;
    }
};