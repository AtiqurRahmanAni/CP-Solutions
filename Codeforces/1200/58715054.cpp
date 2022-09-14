#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,ara[10],l=0,r=9;
    char ch;
    cin>>n;
    memset(ara,0,sizeof(ara));
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        if(ch=='L')
        {
            for(l=0;l<=9;l++)
            {
                if(ara[l]==0)
                {
                    ara[l]=1;
                    break;
                }
            }
            l=0;
        }
        else if(ch=='R')
        {
            for(r=9;r>=0;r--)
            {
                if(ara[r]==0)
                {
                    ara[r]=1;
                    break;
                }
            }
        }
        else if(ch>='0'&&ch<='9')
        {
            if(ara[ch-'0']==1)
            {
                ara[ch-'0']=0;
            }
        }
    }
    for(int i=0;i<10;i++)
        cout<<ara[i];
    puts("");
    return 0;
}