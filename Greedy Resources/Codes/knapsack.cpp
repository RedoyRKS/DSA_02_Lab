#include<bits/stdc++.h>
using namespace std;

struct Item
{
    char name[100];
    int value, weight;
};

bool sort_by_per_unit_price(Item i1, Item i2)
{
    return (double)i1.value/i1.weight > (double)i2.value/i2.weight;
}

double fractional_knapsack(int W, Item items[], int n)
{
    /// order item-list by v_i/w_i descending
    sort(items, items+n, sort_by_per_unit_price);

    int i=0, w=W;
    double p=0; /// caution
    while (w>0 && i<n)
    {
        Item item = items[i];
        int w_i = item.weight;
        int v_i = item.value;

        double x_i = min(1.0, (double)w/w_i);
        w = w - (double) x_i * w_i;
        p = p + (double) x_i * v_i;

        printf("Taking %s %.1f kg -- %.1f taka\n", item.name, x_i*w_i, x_i*v_i);

        i++;
    }
    printf("Total profit %.1f taka\n", p);

    return p;
}

int main()
{
    int W, n;
    cin >> W >> n;
    Item items[n];
    for (int i=0; i<n; i++){
        cin >> items[i].name >> items[i].value >> items[i].weight;
    }
    fractional_knapsack(W, items, n);

}
