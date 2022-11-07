#include <bits/stdc++.h>

using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }

int max(int a, int b, int c) { return max(max(a, b), c); }

int MaxCrossingSum(int arr[], int lb, int ub, int mid)
{
    int sum = 0;
    int l_sum = INT_MIN;
    for (int i = mid; i >= lb; i--)
    {
        sum += arr[i];
        if (sum > l_sum)
            l_sum = sum;
    }
    sum = 0;
    int r_sum = INT_MIN;
    for (int i = mid + 1; i <= ub; i++)
    {
        sum += arr[i];
        if (sum > r_sum)
            r_sum = sum;
    }

    return max(l_sum + r_sum, l_sum, r_sum);
}
int MaximumSubArray(int arr[], int lb, int ub)
{
    if (lb == ub)
        return arr[lb];
    int mid = (lb + ub) / 2;
    return max(MaximumSubArray(arr, lb, mid),
               MaximumSubArray(arr, mid + 1, ub), MaxCrossingSum(arr, lb, ub, mid));
}

int main()
{
    int arr[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = MaximumSubArray(arr, 0, n - 1);
    cout << "Maximum sum is : " << maxSum << endl;
    int arr2[] = {1, 4, 6, -9, 7, 8};

    return 0;
}