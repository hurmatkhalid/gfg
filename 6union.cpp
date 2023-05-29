// Given two arrays a[] and b[] of size n and m respectively.
// The task is to find the number of elements in the union between these two arrays.
//{ Driver Code Starts
// Initial template for C++

#include <iostream>
#include <set>

using namespace std;

class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        // code here
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            s.insert(b[i]);
        }
        return s.size();
    }
};

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
}