#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+5];
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+i);
        vector<int>v;
        i=0;
        j=n-1;
        bool flag=1;
        while(i<=j)
        {
            if(flag)
            {
                v.push_back(ara[i]);
                i++;
                flag=0;
            }
            else
            {
                v.push_back(ara[j]);
                j--;
                flag=1;
            }
        }
        reverse(v.begin(),v.end());
        for(int x: v)
            cout<<x<<' ';
        puts("");
    }
    return 0;
}