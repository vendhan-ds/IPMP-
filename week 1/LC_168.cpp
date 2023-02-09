class Solution
{
public:
    string convertToTitle(int n)
    {
        string s = "";
        // double a=26;
        while (n > 0)
        {
            int x = (n % 26);
            if (x == 0)
                x = 26;
            x = x + 64;
            string str1(1, char(x));
            cout << str1;
            s.insert(0, str1);
            n = floor(n / 26);
            // n=floor(n);
        }
        return s;
    }
};