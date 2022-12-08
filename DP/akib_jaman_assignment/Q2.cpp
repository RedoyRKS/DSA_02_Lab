#include <bits/stdc++.h>
using namespace std;
int T[2][10002];
int a[1000002], b[100002];
float c[100002];
int knapSack(int W, int val[], int wgt[], int n);

int main()
{
    int n, i, j, index, t, mintime, maxval;
    float maxr;
    cin >> n;
    cin >> t;
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        cin >> b[i];

    maxr = 0;
    index = 0;
    mintime = b[0];
    maxval = a[0];

    for (i = 0; i < n; i++)
    {
        c[i] = (float)a[i] / b[i];
        if (c[i] == maxr && b[i] <= t)
        {
            if (a[i] >= maxval)
            {
                maxval = a[i];
                mintime = b[i];
                index = i;
            }
        }
        else if (c[i] > maxr && b[i] <= t)
        {
            maxr = c[i];
            maxval = a[i];
            mintime = b[i];
            index = i;
        }
    }

    a[index] = a[index] * 2;
    int xx = knapSack(t, a, b, n);
    cout << xx << endl;
}

int knapSack(int W, int val[], int wgt[], int n)
{
    int i, j;

    for (i = 0; i < n + 1; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < W + 1; j++)
            {
                if (i == 0 || j == 0)
                    T[0][j] = 0;
                else if (wgt[i - 1] <= j)
                    T[0][j] = max(val[i - 1] + T[1][j - wgt[i - 1]], T[1][j]);
                else
                    T[0][j] = T[1][j];
            }
        }
        else
        {
            for (j = 0; j < W + 1; j++)
            {
                if (i == 0 || j == 0)
                    T[1][j] = 0;
                else if (wgt[i - 1] <= j)
                    T[1][j] = max(val[i - 1] + T[0][j - wgt[i - 1]], T[0][j]);
                else
                    T[1][j] = T[0][j];
            }
        }
    }
    if (n % 2 != 0)
        return T[1][W];
    else
        return T[0][W];
}