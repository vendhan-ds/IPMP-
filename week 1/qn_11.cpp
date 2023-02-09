int findSum(int A[], int N)
{
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        min = min < A[i] ? min : A[i];
        max = max > A[i] ? max : A[i];
    }
    return min + max;
    // code here.
}