#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    char str[100006];
    int n,i,freqz,freqe,freqr,freqo,freqn;
    freqz=freqe=freqr=freqo=freqn=0;
    char ch;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ch;
        if(ch=='z')
            freqz++;
        else if(ch=='n')
            freqn++;
    }
    if(freqn!=0)
        for(i=1; i<=freqn; i++)
        {
            cout<<1;
            if(i!=freqn)
                cout<<" ";
        }
    if(freqz!=0)
        if(freqn!=0)
            cout<<" ";
        for(i=1; i<=freqz; i++)
        {
            cout<<0;
            if(i!=freqz)
                cout<<" ";
        }
    puts("");
    return 0;
}