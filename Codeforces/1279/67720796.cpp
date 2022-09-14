#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main()
{
    //freopen("test.txt","r",stdin);
    int t,r,g,b,ara[3];
    cin>>t;
    while(t--)
    {
        cin>>ara[0]>>ara[1]>>ara[2];
        sort(ara,ara+3);
        if(ara[2]-(ara[0]+ara[1])<2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
 