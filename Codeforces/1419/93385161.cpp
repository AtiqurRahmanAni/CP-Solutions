#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
 
    int i,j,n;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
        cin>>ara[i];
    sort(ara,ara+i);
    vector<int>vec;
    for(i=0; i<n/2; i++)
    {
        vec.push_back(ara[i]);
    }
    int start;
    j=0;
    int sz=vec.size();
    if(n%2==0)
    {
        sz--;
        start=n/2-1;
    }
    else
    {
        start=n/2;
    }
    cout<<sz<<endl;
    for(i=start; i<n; i++)
    {
        cout<<ara[i]<<" ";
        if(j<sz)
        {
            cout<<vec[j++]<<" ";
        }
    }
    puts("");
    return 0;
}