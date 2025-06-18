// 1281. SUBTRACT THE PRODUCT AND SUM OF DIGITS OF AN INTEGER
/* Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 */
#include <bits/stdc++.h>
using namespace std;

/* class Solution
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
 */
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

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The final output is: " << subtractProductAndSum(n) << endl;
}