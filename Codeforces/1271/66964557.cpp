#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    string s,str;
    vector<int>vec;
    int b,w,x;
    w=b=0;
    cin>>n>>s;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='B')
            b++;
        else
            w++;
    }
    if(n%2==0)
    {
        int flag=0;
        if(b%2!=0 || w%2!=0)
            cout<<-1<<endl;
        else
        {
            for(int i=0; i<n; i++)
                str+='W';
            flag=0;
            for(int i=0; i<3*n; i++)
            {
                for(int j=0; j<s.size()-1; j++)
                {
                    if(s[j]=='B')
                    {
                        s[j]='W';
                        if(s[j+1]=='B')
                            s[j+1]='W';
                        else
                            s[j+1]='B';
                        vec.push_back(j+1);
                        break;
                    }
                }
 
                if(str==s)
                {
 
                    cout<<vec.size()<<endl;
                    for(int j=0; j<vec.size(); j++)
                        cout<<vec[j]<<" ";
                    puts("");
                    break;
                }
            }
        }
    }
    else
    {
        if(b%2==0)
        {
            for(int i=0; i<n-1; i++)
                str+='B';
            str+='W';
            x=n-1;
            for(int i=0; i<3*n; i++)
            {
                for(int j=0; j<s.size()-1; j++)
                {
                    if(s[j]=='W')
                    {
                        s[j]='B';
                        if(s[j+1]=='B')
                            s[j+1]='W';
                        else
                            s[j+1]='B';
                        vec.push_back(j+1);
                        break;
                    }
                }
                if(str==s)
                {
 
                    cout<<vec.size()+x/2<<endl;
                    for(int j=0; j<vec.size(); j++)
                        cout<<vec[j]<<" ";
                    for(int j=0; j<x; j+=2)
                        cout<<j+1<<" ";
                    puts("");
                    break;
                }
            }
        }
        else if(w%2==0)
        {
            for(int i=0; i<n-1; i++)
                str+='W';
            str+='B';
            x=n-1;
            for(int i=0; i<3*n; i++)
            {
                for(int j=0; j<s.size()-1; j++)
                {
                    if(s[j]=='B')
                    {
                        s[j]='W';
                        if(s[j+1]=='B')
                            s[j+1]='W';
                        else
                            s[j+1]='B';
                        vec.push_back(j+1);
                        break;
                    }
                }
                if(str==s)
                {
                    cout<<vec.size()+x/2<<endl;
                    for(int j=0; j<vec.size(); j++)
                        cout<<vec[j]<<" ";
                    for(int j=0; j<x; j+=2)
                        cout<<j+1<<' ';
                        puts("");
                    break;
                }
            }
        }
    }
    return 0;
}