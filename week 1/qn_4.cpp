class Solution
{
public:
    int MissingNumber(vector<int> &array, int n)
    {
        int s = 0;
        for (int i = 0; i < array.size(); i++)
        {
            s += array[i];
        }
        return (n * (n + 1) / 2) - s;
    }
};