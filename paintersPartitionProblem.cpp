// CodeStudio Problem:- Problem statement
/* Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.



You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.



Example :
Input: arr = [2, 1, 5, 6, 2, 3], k = 2

Output: 11

Explanation:
First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time. Thus both painters will paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can't be painted in less than 11 units of time. */

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &boards, int k, int n, long long int maxDistance)
{

    long long int painterCount = 1; // Starting with first painter

    long long int distanceSum = 0;

    for (int i = 0; i < n; i++)
    {

        if (boards[i] + distanceSum <= maxDistance)
        {

            distanceSum += boards[i];
        }
        else
        {

            painterCount++; // starting with second painter

            if (painterCount > k || boards[i] > maxDistance)
            {

                return false;
            }

            distanceSum = boards[i];
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)

{

    long long int s = 0;

    long long int sum = 0;

    long long int e;

    long long int ans = -1;

    int n = boards.size();

    for (int i = 0; i < n; i++)
    {

        sum += boards[i];
    }

    e = sum;

    long long int maxDistance = s + (e - s) / 2;

    while (s <= e)
    {

        if (isPossible(boards, k, n, maxDistance))
        {

            ans = maxDistance;

            e = maxDistance - 1;
        }
        else
        {

            s = maxDistance + 1;
        }

        maxDistance = s + (e - s) / 2;
    }

    return ans;
}