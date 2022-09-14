#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    map<string,int>m;
    int n,i;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(m.count(s)==0)
        {
            cout<<"OK"<<endl;
            m[s]=1;
        }
        else
        {
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
    return 0;
}