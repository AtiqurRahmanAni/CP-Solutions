#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,test,n,i,j,m;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ara[n];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        int cnt=0;
        for(i=0; i<n; i++)
        {
            if(ara[i]==1)
            {
                cnt++;
            }
            else
                break;
        }
        if(cnt==n)
        {
            if(n%2==0)
                cout<<"Second"<<endl;
            else
                cout<<"First"<<endl;
        }
        else if(cnt%2!=0)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
    }
    return 0;
}