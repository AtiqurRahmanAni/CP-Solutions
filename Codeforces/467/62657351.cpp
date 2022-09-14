#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    vector<int>v;
    int a,b,n,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if((b-a)>=2)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}