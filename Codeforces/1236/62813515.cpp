#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
 
    int n,a,b,c,i,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        sum=0;
 
        for(; c>=2; c-=2)
        {
            if(b==0)
                break;
            sum+=3;
            b--;
        }
        for(; b>=2; b-=2)
        {
            if(a==0)
                break;
            sum+=3;
            a--;
        }
        cout<<sum<<endl;
    }
 
    return 0;
}