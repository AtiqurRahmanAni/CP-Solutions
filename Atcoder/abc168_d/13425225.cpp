#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 2019
#define pi 2*acos(0.0)
int main()
{
    int n,m,i,a,b,j;
    cin>>m>>n;
    vector<vector<int>> graph(m, vector<int>(0));
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue<int>q;
    vector<int>cost(m,-1);
    vector<int>res(m);
    int u;
    cost[0]=0;
    q.push(0);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int y : graph[u])
        {
            if(cost[y]!=-1)
                continue;
            cost[y]=cost[u]+1;
            res[y]=u;
            q.push(y);

        }
    }
    cout<<"Yes\n";
    for(i=1; i<m; i++)
    {
        cout<<res[i]+1<<endl;
    }
    return 0;
}
