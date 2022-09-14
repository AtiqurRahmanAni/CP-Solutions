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
    vector<int>vec(n);
    i=0;
    int k=1;
    while(i<n && k<n)
    {
        vec[k]=ara[i++];
        k+=2;
    }
    k=0;
    while(i<n && k<n)
    {
        vec[k]=ara[i++];
        k+=2;
    }
    k=0;
    for(i=1;i<n-1;i++)
    {
        if(vec[i-1]>vec[i] && vec[i]<vec[i+1])
            k++;
    }
    cout<<k<<endl;
    for(auto i: vec)
        cout<<i<<" ";
    return 0;
}