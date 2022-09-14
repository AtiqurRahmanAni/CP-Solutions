#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string n;
        vector<int>v;
        cin>>n;
        int sz=n.size();
        int digit=sz-1;
        for(int i=0; i<sz; i++)
        {
            int temp=n[i]-'0';
            int t1=1;
            for(int j=1; j<=digit; j++)
                t1*=10;
            if(n[i]!='0')
                v.push_back(temp*t1);
            digit--;
        }
        cout<<v.size()<<endl;
        for(int x: v)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}