#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,ans,y,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        x=y=11;
        if(n<=9)
        {
            cout<<n<<endl;
            continue;
        }
        for(i=1; ;)
        {
            //cout<<x<<endl;
            if(x>n)
            {
                break;
            }
            ans++;
            i++;
            x+=y;
            if(i==10)
            {
                i=1;
                y*=10;
                y++;
                x=y;
            }
        }
        cout<<ans+9<<endl;
    }
    return 0;
}