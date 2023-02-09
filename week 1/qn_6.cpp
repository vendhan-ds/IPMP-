/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 *
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int *repeatedNumber(const int *A, int n1, int *len1)
{
    long long int n = A.length();
    long long int xorr = A[0];
    for (long long int i = 1; i < n; i++)
    {
        xorr = xorr ^ A[i];
    }
    for (long long int i = 1; i <= n; i++)
    {
        xorr = xorr ^ i;
    }
    long long int rsb = xorr & ~(xorr - 1);
    long long int x = 0, y = 0;
    for (int j = 0; j < n; j++)
    {
        if (A[j] & rsb)
        {
            x = x ^ A[j];
        }
        else
        {
            y = y ^ A[j];
        }
    }
    for (int j = 1; j < n + 1; j++)
    {
        if (i & rsb)
        {
            x = x ^ i;
        }
        else
        {
            y = y ^ i
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (A[i] == x)
        {
            return { x, y }
        }
        else if (A[i] == y)
        {
            break;
        }
    }
    return {y, x};
}
