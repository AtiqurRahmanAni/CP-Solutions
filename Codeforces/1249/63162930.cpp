#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[1000],ara1[1000];
    int i,j,q,n,cnt;
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
        }
        for(i=1;i<=n;i++)
        {
            cnt=1;
            j=ara[i];
            while(1)
            {
                if(j==i)
                    break;
                j=ara[j];
                cnt++;
            }
            cout<<cnt<<" ";
        }
        puts("");
    }
    return 0;
}