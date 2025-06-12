/* // 7. REVERSE INTEGER
Given a signed 32 - bit integer x, return x with its digits reversed.If reversing x causes the value to go outside the signed 32 - bit integer range[-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64 -bit integers(signed or unsigned).
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x) // Ek function banaya with a variable "x".
    {
        int ans = 0;   // ans reversed integer value ko store krega.
        while (x != 0) // jab tk x zero ke barabr nahi hota tb tk yeh loop chalega
        {
            int digit = x % 10;                                           // value ki last digit nikalne ke liye modulus use kra hai.
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) // agar ans ki value 2^31 -1 se jada hoti hai toh zero return hoga.
                return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) // agar ans ki value -2^31 se kam hai toh bhi zero return hoga.
                return 0;
            ans = (ans * 10) + digit; // ans ki jo bhi value hogi usko 10 se multiply krenge and fir loop me jo digit ki value aayi hai usko add kr denge .
            x = x / 10;               //
        }
        return ans;
    }
};

// trial 1. i have to reverse a number. Trying it after learning

#include <bits/stdc++.h>
using namespace std;

int func(int n)
{
    int final = 0; // this will store the reversed number
    while (n != 0)
    {
        int dig = n % 10; // this will extract the last digit of the number
        if (final > INT_MAX / 10)
        {
            return 0; // return 0 if "final" exceeds the upper limit of 32 bit integer
        }
        else if (final < INT_MIN / 10)
        {
            return 0; // return 0 if "final" exceeds the lower limit of 32 bit integer.
        }
        final = (final * 10) + dig; // this will extract the number
        n = n / 10;                 // this removes the last digit
    }
    return final;
}

int main()
{
    int n;
    cout << "enter a 3 digit number you want to reverse:- " << endl;
    cin >> n;
    int ans = func(n);
    cout << "The reversed number is:- " << ans << endl;
}