#include <bits/stdc++.h>
using namespace std;
struct Pair
{
    int a, b;
};
bool comp(Pair p1, Pair p2)
{
    return p1.b < p2.b;
}
int main()
{
    /* an array of struct */
    Pair arr[] = {{5, 100}, {3, 9}, {3, 12}, {1, 6}, {5, 5}, {8, 16}};
    int n = sizeof(arr) / sizeof(arr[0]);
    /* sort the array */
    sort(arr, arr + n, comp);
    /* print the array */
    for (int i = 0; i < n; i++)
    {
        printf("a:%d b:%d\n",arr[i].a, arr[i].b);
    }

    return 0;
}
