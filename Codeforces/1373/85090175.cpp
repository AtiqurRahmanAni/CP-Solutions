#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    int zero,one,i;
    string s;
    cin>>t;
    while(t--)
    {
        one=zero=0;
        cin>>s;
        int sz=s.size();
        for(i=0;i<sz;i++)
        {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        if(one==0 || zero==0)
            cout<<"NET"<<endl;
        else if(min(one,zero)%2==0)
        {
            cout<<"NET"<<endl;
        }
        else
            cout<<"DA"<<endl;
    }
    return 0;
}