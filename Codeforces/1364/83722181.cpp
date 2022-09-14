#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int fx[5]= {0,0,0,-1,1};
int fy[5]= {0,-1,1,0,0};
int main()
{
    int t,n,x,i,j,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int ara[n+1];
        int sum1=0,sum2;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            sum1+=ara[i];
        }
        sum2=sum1;
        int ans2=n,ans1=n;
        for(i=0;i<n;i++)
        {
            if(sum1%x==0)
            {
                sum1-=ara[i];
                ans1--;
            }
            else
                break;
        }
        for(i=n-1;i>=0;i--)
        {
            if(sum2%x==0)
            {
                //cout<<"Yes"<<endl;
                sum2-=ara[i];
                ans2--;
            }
            else
                break;
        }
        //cout<<ans1<<" "<<ans2<<endl;
        int temp=max(ans1,ans2);
        if(temp==0)
            cout<<-1<<endl;
        else
            cout<<temp<<endl;
 
    }
    return 0;
}