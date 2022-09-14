#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ara[80000];
bool check(int l,int r,int x)
{
    int cnt=0,i,j,sum=0,right=l;
    while(true)
    {
        if(sum==x)
        {
            if(cnt>=2)
                return true;
        }
        if(right>r)
            break;
        sum+=ara[right];
        right++;
        cnt++;
        while(sum>x && l<=right)
        {
            sum-=ara[l];
            l++;
            cnt--;
        }
    }
    return false;
}
int main()
{
    int t,i,n,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        int ans=0;
        for(i=0; i<n; i++)
        {
            if(i==0 || i==1)
            {
                if(check(i+1,n-1,ara[i]))
                {
                    //cout<<ara[i]<<endl;
                    ans++;
                }
            }
            else
            {
                if(check(0,i-1,ara[i]))
                {
                    ans++;
                    //cout<<ara[i]<<endl;
                    continue;
                }
                if(check(i+1,n-1,ara[i]))
                {
                    //cout<<ara[i]<<endl;
                    ans++;
                }
            }
        }
        //cout<<"///////////\n";
        cout<<ans<<endl;
        //cout<<"///////////\n";
    }
    return 0;
}