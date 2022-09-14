#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,flag,n,x,flag1;
    cin>>t;
    while(t--)
    {
        vector<int>v,v1,v2;
        flag=flag1=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(i=0; i<n; i++)
        {
            cin>>x;
            v1.push_back(x);
            if(v[i]!=v1[i])
            {
                if(v[i]>v1[i])
                {
                    flag=1;
                }
                else if(v[i]<v1[i])
                {
                    if(flag1==1)
                    {
                        if(v[i-1]-v1[i-1]!=v[i]-v1[i])
                        {
                            flag=1;
                        }
                    }
                    flag1=1;
                }
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    return 0;
}