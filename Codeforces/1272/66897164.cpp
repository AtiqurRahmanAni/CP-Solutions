#include<bits/stdc++.h>
using namespace std;
int main()
{
    int u,d,l,r,mini1,mini2,t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l=r=u=d=0;
        for( i=0;s[i];i++)
        {
            if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='L')
                l++;
            else
                r++;
        }
        mini1=min(l,r);
        mini2=min(u,d);
        if(mini1==0 && mini2==0)
            cout<<'0'<<endl;
        else if(mini1!=0 && mini2==0)
            cout<<"2\nLR"<<endl;
        else if(mini1==0 && mini2!=0)
            cout<<"2\nUD"<<endl;
        else
        {
            cout<<2*mini1+2*mini2<<endl;
            for(i=1;i<=mini1;i++)
                cout<<'R';
            for(i=1;i<=mini2;i++)
                cout<<'U';
            for(i=1;i<=mini1;i++)
                cout<<'L';
            for(i=1;i<=mini2;i++)
                cout<<'D';
            puts("");
        }
    }
    return 0;
}