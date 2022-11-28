#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> iPair;

struct Graph
{
    int X, Y;
    vector<pair<int, iPair>> edges;

    Graph(int V, int E)
    {
        this->X = V;
        this->Y = E;
    }

    void addEdge(int u, int v, int w)
    {
        edges.push_back({w, {u, v}});
    }
};

int main()
{

    int T;
    while (T > 0)
    {
        int N, M;
        cin >> T;
        cin >> N >> M;
        Graph g(N, M);

        for (int i = 0; i < M; i++)
        {
            int X, Y, C;
            cin >> X >> Y >> C;
            g.addEdge(X, Y, C);
        }
        int Q;
        cin >> Q;
        int A, K;
        for (int i = 0; i < Q; i++)
        {
            cin >> A >> K;
        }
        T--;
    }

    return 0;
}