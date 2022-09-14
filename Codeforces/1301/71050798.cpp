#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<(int)a.size();i++)
        {
            if(a[i]!=b[i])
            {
                if(b[i]==c[i])
                    swap(a[i],c[i]);
                else if(a[i]==c[i])
                    swap(b[i],c[i]);
            }
            else
            {
                swap(a[i],c[i]);
            }
        }
        if(a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        //cout<<a<<' '<<b<<endl;
    }
    return 0;
}