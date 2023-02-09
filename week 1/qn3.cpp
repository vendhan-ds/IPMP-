class Solution
{
public:
    // Function to find two repeated elements.
    vector<int> twoRepeated(int arr[], int N)
    {
        // int x=0;
        vector<int> ans;
        for (int i = 0; i < N + 2; i++)
        {
            if (arr[abs(arr[i])] < 0)
            {
                ans.push_back(abs(arr[i]));
            }
            else
            {
                arr[abs(arr[i])] = -arr[abs(arr[i])];
            }
        }

        return ans;
        // Your code here
    }
};