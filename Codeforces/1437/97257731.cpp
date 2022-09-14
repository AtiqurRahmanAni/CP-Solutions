#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
using namespace std;
int main()
{
    fastIO
 
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int zero=0,one=0;
        int sz=s.size();
        for(int i=1;i<sz;i++)
        {
            if(s[i-1]==s[i])
            {
                zero++;
            }
 
        }
        cout<<(zero+1)/2<<endl;
    }
    return 0;
}