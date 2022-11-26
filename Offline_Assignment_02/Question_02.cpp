#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    vector<double> points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i]; // taking the input
    }
    sort(points.begin(), points.end()); // sorting points
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans++;
        //creating a new interval
        int j = i;
        while (j < n && points[j] <= points[i] + 1.0)
            j++;
        i = j - 1;
    }
    cout << ans;
    return 0;
}