#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ll n,x,k,msg;
    int flag=0;
    vector<ll>vec;
    vector<ll>::iterator it;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>msg;
        for(int j=0; j<vec.size(); j++)
        {
            if(vec[j]==msg)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            vec.push_back(msg);
            if(vec.size()>k)
            {
                it=vec.begin();
                it=vec.erase(it);
            }
        }
        flag=0;
 
    }
    cout<<vec.size()<<endl;
    for(int i=vec.size()-1; i>=0; i--)
    {
        cout<<vec[i];
        if(i!=0)
            cout<<" ";
    }
    puts("");
    return 0;
}