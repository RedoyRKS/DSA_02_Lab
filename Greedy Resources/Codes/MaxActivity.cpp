#include <bits/stdc++.h>

using namespace std;

struct Max_activity
{
    int number;
    int start;
    int end;
};
typedef struct Max_activity job;
bool sortCompare(job j1, job j2)
{
    return j1.end < j2.end;
}
void max_act(job arr[], int n)
{
    int current, next;
    current = 0;
    cout << arr[current].number << " ";
    for (next = 1; next < n; next++)
    {
        if (arr[current].end <= arr[next].start)
        {
            current = next;
            cout << current << " ";
        }
    }
}
int main()
{

    int n;
    cin >> n;
    job array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i].number >> array[i].start >> array[i].end;
    }
    sort(array, array + n, sortCompare);
    max_act(array, n);

    return 0;
}