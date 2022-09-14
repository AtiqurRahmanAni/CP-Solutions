#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,cost,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        cost=0;
        vector<int>a,b;
        a.push_back(0);
        b.push_back(0);
        for(int j=1;j<=n;j++)
        {
            cin>>z;
            a.push_back(z);
            b.push_back(j);
        }
        if(n>m || n==2)
            cout<<-1<<endl;
        else
        {
            for(int j=1;j<n;j++)
            {
                x=a[j]+a[j+1];
                cost+=x;
            }
            cost+=a[n]+a[1];
            sort(a.begin(),a.end());
            y=m-n;
            x=a[1]+a[2];
            x=y*x;
            cost+=x;
            cout<<cost<<endl;
            for(int j=1;j<n;j++)
                cout<<b[j]<<" "<<b[j+1]<<endl;
            cout<<b[n]<<" "<<b[1]<<endl;
            for(int j=1;j<=y;j++)
                cout<<b[1]<<" "<<b[2]<<endl;
        }
    }
    return 0;
}