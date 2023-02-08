class Solution
{
public:
    int titleToNumber(string s)
    {
        int n = s.length();

        int ans = 0;
        double t = 1;
        for (int i = 0; i < n; i++)
        {
            ans += (s[n - i - 1] - 'A' + 1) * t;
            t *= 26;
        }
        return ans;
    }
};