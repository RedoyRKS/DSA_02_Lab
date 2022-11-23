#include<bits/stdc++.h>
using namespace std;

typedef struct A
{
    int i, s, f;
}A;

bool comp(A a1, A a2)
{
    return a1.f < a2.f;
}

void activity_selection(int s[], int f[], int n)
{
    A as[n];
    for (int i = 0; i < n; i++)
    {
        as[i].i = i;
        as[i].s = s[i];
        as[i].f = f[i];
    }

    sort(as, as+n, comp);
    vector<A> solution;
    solution.push_back(as[0]);
    int last_chosen_act_index = 0;
    for (int current_act_index = 0; current_act_index < n; current_act_index++)
    {
        if(as[current_act_index].s >= as[last_chosen_act_index].f)
        {
            solution.push_back(as[current_act_index]);
            last_chosen_act_index = current_act_index;
        }
    }

    for(A a: solution)
    {
        cout << a.i<<" "<< a.s <<" " << a.f <<endl;
    }
    
    
}

int main()
{
    int s[] = {4, 2, 1, 8};
    int f[] = {6, 7, 6, 11};
    int n = 4;
    activity_selection(s, f, n);
}