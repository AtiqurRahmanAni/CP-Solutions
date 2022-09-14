#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,k,sum=0,j,x;
        cin>>n>>k;
        ll ara[n];
        vector<int>frnd;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        deque<ll>q;
        for(i=0; i<n; i++)
        {
            q.push_back(ara[i]);
        }
        int ind=n-1;
        for(i=0; i<k; i++)
        {
            cin>>x;
            if(x==1)
            {
                sum+=(q.back()*2);
                q.pop_back();
            }
            else
            {
                frnd.push_back(x);
            }
        }
        sort(frnd.begin(),frnd.end(),greater<int>());
        for(int x: frnd)
        {
            sum+=q.front();
            q.pop_front();
            sum+=q.back();
            q.pop_back();
            for(j=1; j<=x-2; j++)
            {
                q.pop_front();
            }
        }
        cout<<sum<<endl;
 
    }
    return 0;
}