#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int main()
{
    int t,n,maxi=0,i;
    cin>>n;
    vector<int>a(n),b(n),pos1(n),pos2(n),shift(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]--;
        pos1[a[i]]=i;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        b[i]--;
        pos2[b[i]]=i;
    }
    for(i=0;i<n;i++)
    {
        int c=pos1[i]-pos2[i];
        if(c<0)
            c+=n;
        shift[c]++;
    }
    maxi=*max_element(shift.begin(),shift.end());
    cout<<maxi<<endl;
    return 0;
}