#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,n,i;
    set<int>s;
    deque<int>q;
    stack<int>order;
    cin>>m>>n;
    int w[m+5];
    for(i=1; i<=m; i++)
        cin>>w[i];
    int b[n+5];
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        if(!s.count(b[i]))
        {
            q.push_back(b[i]);
            s.insert(b[i]);
        }
    }
    int ans=0;
    for(i=1;i<=n;i++)
    {
        while(q.front()!=b[i])
        {
            ans+=w[q.front()];
            order.push(q.front());
            q.pop_front();
        }
        int temp=q.front();
        q.pop_front();
        while(!order.empty())
        {
            q.push_front(order.top());
            order.pop();
        }
        q.push_front(temp);
    }
    cout<<ans<<endl;
    return 0;
}