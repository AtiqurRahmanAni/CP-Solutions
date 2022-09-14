#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    map<char,int>mp;
    cin>>s;
    int sz=s.size();
    for(i=0;i<sz;i++)
        mp[s[i]]++;
    if(sz%2!=0)
    {
        cout<<"First"<<endl;
    }
    else
    {
        int flag=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second%2!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
 
    }
    return 0;
}
 
 
 
 