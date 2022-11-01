#include <bits/stdc++.h>
using namespace std;
struct Pair
{
    int a, b;
};
bool comp(Pair p1, Pair p2)
{
    return p1.b / p1.a > p2.b / p2.a;
}
bool comp2(Pair p1, Pair p2)
{
    if (p1.a != p2.a)
        return p1.a > p2.a;
    else
        return p1.b >p2.b;
    // return // p1.a > p2.a; //p1.b / p1.a > p2.b / p2.a;
}
int main()
{
    /* an array of struct */
    Pair arr[] = {{5, 100}, {3, 9}, {3, 12}, {1, 6}, {5, 5}, {8, 16}};
    int n = sizeof(arr) / sizeof(arr[0]);
    /* sort the array */
    sort(arr, arr + n, comp2);
    /* print the array */
    for (int i = 0; i < n; i++)
    {
        printf("a:%d b:%d ratio:%d\n",arr[i].a, arr[i].b, arr[i].b/arr[i].a);
    }

    return 0;
}