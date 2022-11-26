#include <bits/stdc++.h>
using namespace std ;

void MaxTrip(char c[], int s[], int e[], int n, int m, int X)
{
    int i=0, j, res[10], k=0;
  
    for (j = 1; j < n; j++) {
        
        if (e[j] + X >= s[i]) {
            res[k++] = j ;
            i = j;
        }
    }
    
    cout << m * k ;
    cout << "\nChoosen tasks:\n" ;
    int ss = sizeof(res) / sizeof(res[0]) ;
    for (int i=0; i<ss; i++) {
        cout << c[res[i]] << "\n" ;
    }
}
int main() {
    int M, N, X ;
    char c[10] ;
    int s[10], e[10] ;
    
    cin >> M >> N >> X ;
    
    for (int i=0;i<N; i++) {
        cin >> c[i] >> s[i] >> e[i] ;
        
    }
    MaxTrip(c, s, e, N, M, X) ;
}