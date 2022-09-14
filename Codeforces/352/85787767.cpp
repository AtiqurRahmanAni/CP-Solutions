#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i,cnt=0,x,cnt1=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==5)
            cnt++;
        else
            cnt1++;
    }
    if(cnt>=9 && cnt1!=0)
    {
        for(i=1;i<=(cnt/9)*9;i++)
        {
            cout<<5;
        }
        for(i=1;i<=cnt1;i++)
        {
            cout<<0;
        }
        puts("");
    }
    else if(cnt1>0)
    {
        cout<<0<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}