#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int t,n,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int flag=0;
        if(n%2==0)
        {
            for(i=1; i<n; i+=2)
            {
                if((s[i]-'0')%2==0)
                {
                    flag=1;
                }
            }
            if(flag)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
        else
        {
            for(i=0; i<n; i+=2)
            {
                if((s[i]-'0')%2!=0)
                {
                    flag=1;
                }
            }
            if(flag)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}