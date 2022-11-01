#include <bits/stdc++.h>
using namespace std;

#define inf 999999;

/**
    start = p
    mid = q
    end = r
**/

void merge(int A[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1 + 1], R[n2 + 1];

    for (int i = 0; i < n1; i++)
    {
        L[i] = A[start + i];
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = A[mid + j + 1];
    }

    L[n1] = inf;
    R[n2] = inf;

    int i = 0, j = 0;

    for (int k = start; k <= end; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}

void merge_sort(int A[], int start, int end)
{
    // recursive case ( base ommitted since returns nothing)
    if (start < end)
    {
        cout << "Working with elements from: " << A[start] << " to " << A[end] << endl;

        int mid = (start + end) / 2;
        merge_sort(A, start, mid);
        merge_sort(A, mid + 1, end);
        merge(A, start, mid, end);
    }
}

int main()
{
    int a[] = {7, 2, 9, 4, 3, 8, 6, 1};
    merge_sort(a, 0, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << endl;
    }
}
