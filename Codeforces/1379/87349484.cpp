#include<bits/stdc++.h>
using namespace std;
string sub="abacaba";
int countstr(string s,int n)
{
    int cnt=0,i;
    string temp;
    for(i=0; i<n-7+1; i++)
    {
        temp=s.substr(i,7);
        if(temp==sub)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int t,n,cnt,i,flag,j;
    string s,s1;
    cin>>t;
    while(t--)
    {
        cnt=flag=0;
        string temp="";
        cin>>n>>s;
        cnt=countstr(s,n);
        if(cnt>1)
            cout<<"NO"<<endl;
        else if(cnt==1)
        {
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
            {
                if(s[i]=='?')
                    cout<<'x';
                else
                    cout<<s[i];
            }
            puts("");
        }
        else
        {
            for(i=0; i<n-7+1; i++)
            {
                temp=s.substr(i,7);
                for(j=0; j<7; j++)
                {
                    //cout<<temp[j]<<" ";
                    if(temp[j]=='?')
                    {
                        temp[j]=sub[j];
                    }
                }
                if(temp==sub)
                {
                    s1=s;
                    for(j=0; j<7; j++)
                    {
                        s1[i+j]=temp[j];
                    }
                    if(countstr(s1,n)==1)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
                for(i=0; i<n; i++)
                {
                    if(s1[i]=='?')
                        cout<<'x';
                    else
                        cout<<s1[i];
                }
                puts("");
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}