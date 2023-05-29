#include <iostream>
using namespace std;

class Solution
{
public:
    long long maxSubarraySum(int arr[], int n)
    {

        long long cs = 0, ms = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cs += arr[i];
            ms = max(cs, ms);
            if (cs < 0)
            {
                cs = 0;
            }
        }
        return ms;
    }
};

int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}