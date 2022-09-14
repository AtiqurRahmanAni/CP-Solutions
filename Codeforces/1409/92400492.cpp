#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,a,b,ans,diff;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        diff=abs(b-a);
        if(diff%10==0)
            cout<<diff/10<<endl;
        else
            cout<<(diff/10)+1<<endl;
    }
    return 0;
}