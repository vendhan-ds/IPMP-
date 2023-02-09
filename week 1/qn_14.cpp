void rearrange(int arr[], int n)
{
    // int l=0;
    vector<int> v;
    vector<int> ar(arr, arr + arr.length());
    int j = 0;
    int i = 0;
    for (i < ar.size())
    {
        if (arr[i] < 0)
        {
            v.push_back(arr[i]);
            ar.erase(i);
        }

        /*if(arr[i]<0 && i%2==0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j=j+2;
        }*/
    }
    i = 0;
    int n = ar.size();
    int m = v.size();
    while (n--)
    {
        if (i == m)
            break;
        ar.insert(2 * i - 1, v[i]);
        i++;
    }
    while (i < m)
    {
        ar.push_back(ar[i]);
    }
    return ar;
    // code here
}