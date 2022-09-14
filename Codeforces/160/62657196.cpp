#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    vector<int>v;
    int i,cnt=0,n,sum1=0,sum2=0,x;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
        sum1+=x;
    }
    sort(v.begin(),v.end());
    if(v[0]>v[n-1])
    {
        for(i=0; i<n; i++)
        {
            if(sum2>sum1 ||cnt>n-cnt)
                break;
            cnt++;
            sum2+=v[i];
            sum1-=v[i];
        }
    }
    else
    {
        for(i=n-1; i>=0; i--)
        {
            if(sum2>sum1 ||cnt>n-cnt)
                break;
            cnt++;
            sum2+=v[i];
            sum1-=v[i];
        }
    }
    cout<<cnt<<endl;
 
    return 0;
}