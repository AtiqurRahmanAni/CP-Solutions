#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,mi,miindex,temp,flag,f1,f2;
    int ara[250],ara1[250],ara2[250];
    cin>>t;
    while(t--)
    {
        cin>>n;
        mi=250;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            ara1[i]=ara[i];
            ara2[i]=ara[i];
            if(ara[i]<mi)
            {
                mi=ara[i];
                miindex=i;
            }
        }
        flag=0;
        sort(ara1,ara1+n);
        for(i=0; i<n; i++)
        {
            if(ara1[i]!=ara[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
 
            cout<<"YES"<<endl;
        }
        else if(flag==1)
        {
            f1=f2=0;
             while(1)
             {
                 if(ara[0]==mi)
                    break;
                 temp=ara[0];
                 for(i=1;i<n;i++)
                 {
                     ara[i-1]=ara[i];
                 }
                 ara[n-1]=temp;
             }
             while(1)
             {
                 if(ara2[n-1]==mi)
                    break;
                 temp=ara2[n-1];
                 for(i=n-1;i>=1;i--)
                 {
                     ara2[i]=ara2[i-1];
                 }
                 ara2[0]=temp;
             }
             for(i=0;i<n;i++)
             {
                 if(ara1[i]!=ara[i])
                 {
                     f1=1;
                     break;
                 }
             }
             for(i=0;i<n;i++)
             {
                 if(ara1[i]!=ara2[(n-1)-i])
                 {
                     f2=1;
                     break;
                 }
             }
             if(f1==0 || f2==0)
                cout<<"YES"<<endl;
             else
                cout<<"NO"<<endl;
 
        }
 
    }
 
 
    return 0;
}