class Solution
{
public:
    void pushZerosToEnd(int arr[], int n)
    {
        int j = 0;
        int chk = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                j++;
            }
        }

        // code here
    }
};