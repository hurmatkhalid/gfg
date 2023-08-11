// Given an array arr[] denoting heights of N towers and a positive integer K.

// For each tower, you must perform exactly one of the following operations exactly once.

// Increase the height of the tower by K
// Decrease the height of the tower by K
// Find out the minimum possible difference between the height
// of the shortest and tallest towers after you have modified each tower.

// You can find a slight modification of the problem here.
// Note: It is compulsory to increase or decrease the height by K for each tower.
// After the operation, the resultant array should not contain any negative integers.

//{ Driver Code Starts
// Initial template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        // code here
        sort(arr, arr + n);
        int largest = arr[n - 1] - k;
        int smallest = arr[0] + k;
        int result = arr[n - 1] - arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - k < 0)
                continue;
            largest = max(arr[n - 1] - k, arr[i - 1] + k);
            smallest = min(arr[0] + k, arr[i] - k);
            result = min(result, largest - smallest);
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends