// Given an array A of size N of integers.Your task is to find the sum of minimum and maximum element in the array.
//{ Driver Code Starts
/* Driver program to test above function */

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findSum(int A[], int N)
    {
        int min = A[0];
        int max = A[0];
        for (int i = 1; i < N; i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
            else if (A[i] < min)
            {
                min = A[i];
            }
        }
        return min + max;
        // code here.
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        int ans = ob.findSum(arr, n);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends