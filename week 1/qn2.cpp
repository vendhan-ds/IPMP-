class Solution
{
public:
    int findSingle(int N, int arr[])
    {
        int x = 0;
        for (int i = 0; i < N; i++)
        {
            x = x ^ arr[i];
        }
        return x;
        // code here
    }
};