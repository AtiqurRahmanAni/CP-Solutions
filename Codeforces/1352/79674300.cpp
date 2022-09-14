#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        deque<int>q;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>x;
            q.push_back(x);
        }
        int alice=0;
        int bob=0;
        int moves=0;
        int sum1=0,sum2=0;
        int flag=0;
        while(!q.empty())
        {
            while(!q.empty())
            {
                if(flag==0)
                {
                    moves++;
                    flag=1;
                }
                if(alice>bob)
                {
                    bob=0;
                    break;
                }
                alice+=q.front();
                sum1+=q.front();
                q.pop_front();
            }
            while(!q.empty())
            {
                if(flag==1)
                {
                    moves++;
                    flag=0;
                }
                if(bob>alice)
                {
                    alice=0;
                    break;
                }
                bob+=q.back();
                sum2+=q.back();
                q.pop_back();
            }
        }
        cout<<moves<<' '<<sum1<<' '<<sum2<<endl;
    }
    return 0;
}