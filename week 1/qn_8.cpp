vector<int> singleNumber(vector<int> nums)
{
    int n = nums.size();
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ nums[i];
    }
    // cout<<x;
    int rsb = x & ~(x - 1);
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (rsb & nums[i])
        {
            a = a ^ nums[i];
        }
        else
        {
            b = b ^ nums[i];
        }
    }
    if (a > b)
        return {b, a};
    return {a, b};
    // Code here.
}