#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        set<int>st;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            st.insert(x);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}