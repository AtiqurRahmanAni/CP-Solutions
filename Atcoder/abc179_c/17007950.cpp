#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int a,b,n,i,cnt;
    vector<pair<int,int>>vec;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        vec.push_back({a,b});
    }
    for(i=0; i<n-2; i++)
    {
        cnt=0;
        for(int j=i; j<i+3; j++)
        {
            //cout<<j<<" ";
            if(vec[j].first==vec[j].second)
            {
                cnt++;
            }
        }
        if(cnt==3)
            break;
    }
    if(cnt==3)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
