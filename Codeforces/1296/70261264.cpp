#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        int sum=0,x,cnt=0,cnt1=0;
        cin>>n;
        int ara[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
            if(ara[i]%2!=0)
                cnt++;
            if(ara[i]%2==0)
                cnt1++;
        }
        if(sum%2!=0)
            cout<<"YES"<<endl;
        else
        {
           if(cnt==n || cnt1==n)
            cout<<"NO"<<endl;
           else
            cout<<"YES"<<endl;
 
        }
 
    }
    return 0;
}