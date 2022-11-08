#include <bits/stdc++.h>
using namespace std;

int M_Sort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

int mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return M_Sort(arr, temp, 0, array_size - 1);
}

int M_Sort(int arr[], int temp[], int left, int right)
{
    int mid, inversion_count = 0;
    if (right > left)
    {
        mid = (right + left) / 2;

        inversion_count += M_Sort(arr, temp, left, mid);
        inversion_count += M_Sort(arr, temp, mid + 1, right);

        inversion_count += merge(arr, temp, left, mid + 1, right);
    }
    return inversion_count;
}

int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int inversion_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];

            inversion_count = inversion_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inversion_count;
}

int main()
{
    int arr[] = {8, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, n);
    cout << " Count Inversions Number: " << ans;
    return 0;
}