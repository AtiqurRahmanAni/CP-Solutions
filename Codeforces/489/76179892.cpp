#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(string s)
{
    int i,sum=0;
    for(i=0;i<s.size();i++)
        sum+=(s[i]-'0');
    return sum;
}
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    string s="";
    if(n>1 && m==0)
    {
        cout<<-1<<' '<<-1<<endl;
    }
    else if(n*9>=m)
    {
        for(i=1;i<=n;i++)
            s+='0';
        i=0;
        while(sum(s)!=m)
        {
            int x=sum(s);
            if(m-x>=9)
                s[i]='9';
            else
                s[i]=(m-x)+'0';
            i++;
        }
        string s1=s;
        reverse(s1.begin(),s1.end());
        if(s1[0]=='0')
        {
            for(i=1;i<n;i++)
            {
                if(s1[i]!='0')
                {
                    s1[0]='1';
                    int temp=(int)s1[i]-48;
                    //cout<<temp<<endl;
                    temp--;
                    s1[i]=temp+'0';
                    break;
                }
            }
        }
        cout<<s1<<' '<<s<<endl;
    }
    else
    {
        cout<<-1<<' '<<-1<<endl;
    }
    return 0;
}