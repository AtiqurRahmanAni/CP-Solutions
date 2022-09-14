#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 10e9+7
using namespace std;
int main()
{
    int n,i,j;
    string s1,s2="",s3="";
    cin>>n;
    cin>>s1;
    n*=2;
//    cout<<s1<<endl;
    s2=s1.substr(0,n/2);
    s3=s1.substr(n/2,n-1);
//    cout<<s2<<" "<<s3<<endl;
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
//    cout<<s2<<" "<<s3<<endl;
    int flag=0;
    for(i=0;i<n/2;i++)
    {
        if(s2[i]<s3[i])
        {
            flag=1;
        }
        else if(s2[i]==s3[i])
        {
            flag=3;
            break;
        }
        else if(s2[i]>s3[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(flag==3)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0;i<n/2;i++)
    {
        if(s2[i]<s3[i])
        {
            cout<<"NO"<<endl;
            flag=0;
            break;
        }
        else if(s2[i]>s3[i])
            flag=1;
        else
        {
            cout<<"NO"<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}