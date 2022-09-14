#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ll n,x,k,msg;
    int flag=0;
    vector<int>vec;
    set<int>s;
    vector<int>::iterator it;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>msg;
        if(!s.count(msg))
        {
            if(vec.size()>=k)
            {
                it=vec.begin();
                s.erase(vec[0]);
                vec.erase(it);
            }
            vec.push_back(msg);
            s.insert(msg);
        }
 
    }
    cout<<vec.size()<<endl;
    reverse(vec.begin(),vec.end());
    for(auto it:vec)
        cout<<it<<" ";
    puts("");
    return 0;
}