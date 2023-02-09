#include <bits/stdc++.h>

class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int count = 0;
    map<int, int> m;

    int doUnion(int a[], int n, int b[], int m)
    {
        int i = 0;
        int j = 0;
        int count = 0;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                i++;
                count++;
            }
            else if (a[i] > b[j])
            {
                j++;
                count++;
            }
            else
            {
                count++;
                i++;
                j++;
            }
        }
        while (i < n)
        {
            i++;
            count++;
        }
        while (j < m)
        {
            j++;
            count++;
        }
        return count;
        // code here
    }
};