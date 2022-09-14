#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,l,r,z,flag,j,flag1,x,y;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        cin>>n;
        flag=0;
        vector<int>a,b;
        for(i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(i=0; i<n; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        z=0;
        flag1=0;
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i] && flag==0)
            {
                if(a[i]>b[i])
                {
                    flag1=1;
                    break;
                }
                else
                {
                    z=b[i]-a[i];
                    flag=1;
                }
            }
            else if(a[i]==b[i] && flag==1)
                flag=2;
            else if(a[i]!=b[i] && flag==2)
            {
                flag1=1;
                break;
            }
            else if(a[i]!=b[i] && flag==1)
            {
                if(a[i]>b[i])
                {
                    flag1=1;
                    break;
                }
                else
                {
                    x=b[i]-a[i];
                    if(x!=z)
                    {
                        flag1=1;
                        break;
                    }
                }
            }
        }
        if(flag1==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}