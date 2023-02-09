string reverseWord(string str)
{
    int l = 0;
    int r = str.length() - 1;
    while (l < r)
    {
        char temp = str[r];
        str[r] = str[l];
        str[l] = temp;
        l++;
        r--;
    }
    return str;
    // Your code here
}