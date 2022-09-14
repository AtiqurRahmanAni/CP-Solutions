#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    string s1,s2;
    cin>>s1>>s2;
    int sz1=s1.size();
    int sz2=s2.size();
    map<char,int>mp,mp1;
    if(sz1!=sz2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int cnt=0;
    int flag1=0;
    int a,b;
    for(int i=0; i<sz1; i++)
    {
        if(s1[i]!=s2[i])
        {
            cnt++;
            if(flag1==0)
            {
                a=i;
                flag1=1;
            }
            else if(flag1==1)
            {
                b=i;
                flag1=2;
            }
        }
    }
    if(cnt!=2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        swap(s1[a],s1[b]);
        if(s1==s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}