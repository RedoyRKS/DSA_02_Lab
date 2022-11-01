#include <bits/stdc++.h>
using namespace std;

typedef struct mxmin
{
    int max_;
    int min_;

} mxmin;

mxmin a = {1, 2};

mxmin dnc_max_min(int A[], int start, int end)
{
    // base case
    if (start == end)
        return {A[start], A[start]}; // returning A[start] as both max and min

    // recursive case
    int mid = (start + end) / 2;
    mxmin left_res = dnc_max_min(A, start, mid);
    mxmin right_res = dnc_max_min(A, mid + 1, end);

    // combine/merge case
    int mx = max(left_res.max_, right_res.max_);
    int mn = min(left_res.min_, right_res.min_);

    return {mx, mn};
}

int main()
{
    int array[] = {22, 13, -5, -8, 15, 60, 17, 31, 47};
    mxmin res = dnc_max_min(array, 0, 8);
    cout << res.max_ << " " << res.min_ << endl;
}
