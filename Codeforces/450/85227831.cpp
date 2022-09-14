#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m,i,x,a,f,b;
    cin>>n>>m;
    deque<pair<int,int>>q;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        //cin>>x;
        q.push_back({0,i+1});
        cin>>ara[i+1];
    }
    i=1;
    int posf,posb;
    while(q.size()>1)
    {
        if(ara[i]==-1)
        {
            i++;
            if(i>n)
                i=1;
            continue;
        }
        //cout<<"Yes"<<endl;
        f=q.front().first;
        posf=q.front().second;
        //b=q.back().first;
        //posb=q.back().second();
        if((f>=ara[i] || m>=ara[i]))
        {
            q.pop_front();
            ara[i]=-1;
        }
        else
        {
            f+=m;
            q.pop_front();
            q.push_back({f,posf});
        }
        i++;
        if(i>n)
            i=1;
 
    }
    cout<<q.front().second<<endl;
    return 0;
}