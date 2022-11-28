#include <bits/stdc++.h>
using namespace std;

bool com(vector<int> p1, vector<int> p2)
{
    return p1[1] < p2[1];
}

int minArrows(vector<vector<int>> points)
{

    sort(points.begin(), points.end() + 1, com);

    int end1 = points[0][1];

    int countt = 1;

    for (int i = 1; i < points.size(); i++)
    {
        if (points[i][0] <= end1)
        {
            continue;
        }
        else
        {

            end1 = points[i][1];
            countt++;
        }
    }
    return countt;
}

int main()
{
    vector<vector<int>> points = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << minArrows(points);
    return 0;
}