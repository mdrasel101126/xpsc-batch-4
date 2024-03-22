//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        long long int l = 0, r = 0, sum = 0, ans = 0;
        while (r < N)
        {
            sum += Arr[r];
            if (r - l + 1 == K)
            {
                ans = max(ans, sum);
                sum -= Arr[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends