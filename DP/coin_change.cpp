#include<bits/stdc++.h>
#define INF 99999
using namespace std;

int coin_change(int M, int c[], int d)
{
    int best_num_coins[M+1];
    best_num_coins[0] = 0; // pay 0 coin at the start
    

    for (int m = 1; m<=M; m++) // start from m upto M, the original value
    {
        cout<<"to form " << m << " taka " <<endl;
        best_num_coins[m] = INF; // for comparison purpose
        for (int i = 0; i < d; i++)
        {
            if(m >= c[i]) // if value to fill >= current denomination
            {
                cout<<" considering "<<c[i]<<endl;
                int nc = 1+best_num_coins[m-c[i]];
                cout<<": will need "<<nc<<" coins "<<endl;
                if(nc < best_num_coins[m])
                    best_num_coins[m] = nc;
            }
        }
          
    }

    return best_num_coins[M];
    
}


void func1(){
    for (int i = 0; i < 5000000; i++)
    {
        cout<<".";
    }
    
}

int main()
{
    // clock_t t = clock();
    // func1();
    // t = clock() - t;
    // double time = ((double)t)/CLOCKS_PER_SEC;
    // cout<<time<<" seconds"<<endl;

    int M = 15;
    int c[] = {1,3,4,7};
    int d = coin_change(M, c, 4);
    cout<<"Need minimum " << d<<endl;

}