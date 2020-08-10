#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> dsk;
dsk ke[20];
int dinh, canh;
 
bool DFS(bool vs[], int u, int count)
{
    if (count == dinh)
    {
        return true;
    }
    vs[u] = true;
    for (int v = 0; v < ke[u].size(); v++)
    {
        int tmp = ke[u][v];
        if (vs[tmp] == false)
        {
            if (DFS(vs, tmp, count + 1))
            {
                return true;
            }
        }
    }
    vs[u] = false;
    return false;
}
bool isHamil()
{
    bool vs[20];
    memset(vs, false, sizeof(vs));
    for (int i = 1; i <= dinh; i++)
    {
        int count = 1;
        if (DFS(vs, i, count))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> dinh >> canh;
        for (int i = 0; i <= 20; i++)
        {
            ke[i].clear();
        }
        while (canh--)
        {
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        if (isHamil())
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
