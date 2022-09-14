#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int cnt=0;
        int limit=k;
        int prev=0;
        int prevnum=0;
        while(1)
        {
            int nai=(k/n-prev/n);
 
            prev=k;
            cnt+=(k-prevnum-nai);
            prevnum=k;
            if(cnt==limit)
                break;
            k+=nai;
        }
        cout<<k<<endl;
    }
    return 0;
}