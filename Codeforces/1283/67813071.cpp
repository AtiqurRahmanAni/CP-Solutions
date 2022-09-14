#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("test.txt","r",stdin);
    int t,k,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int temp=k/2;
        int temp1=n/k;
        int ans=temp1*k;
        if(ans==n)
            cout<<n<<endl;
        else
        {
            if(temp>=n-ans)
                cout<<ans+(n-ans)<<endl;
            else
                cout<<ans+temp<<endl;
        }
    }
    return 0;
}