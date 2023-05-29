// Move all negative numbers to beginning and positive to end with constant extra space
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// naive way: o(nlogn)
// void lol(vector<int> &a)
// {
//     sort(a.begin(), a.end());
// }
// int main()
// {
//     vector<int> arr;
//     arr.push_back(-99);
//     arr.push_back(2);
//     arr.push_back(-12);
//     arr.push_back(45);
//     arr.push_back(-56);

//     lol(arr);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// better way: o(n)
// void lol(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             if (i != j)
//             {
//                 swap(arr[i], arr[j]);
//                 j++;
//             }
//         }
//     }
// }
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
// int main()
// {
//     int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     lol(arr, n);
//     printArray(arr, n);
//     return 0;
// }

// better way: two pointer approach
void shift(int arr[], int left, int right)
{
    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
        {
            left++;
        }
        else if (arr[left] > 0 && arr[right] < 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] > 0 && arr[right] > 0)
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
    }
}
void display(int arr[], int right)
{
    for (int i = 0; i <= right; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {-12, 11, -13, -5,
                 6, -7, 5, -3, 11};
    int arr_size = sizeof(arr) /
                   sizeof(arr[0]);

    // Function Call
    shift(arr, 0, arr_size - 1);
    display(arr, arr_size - 1);
    return 0;
}