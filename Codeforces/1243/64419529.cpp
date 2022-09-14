#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int t,i,j,cnt,n,x,y;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>n>>s1>>s2;
        cnt=0;
        for(i=0; s1[i]; i++)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
 
                if(cnt==1)
                    x=i;
                else
                    y=i;
            }
        }
        if(cnt==2 && s1[x]==s1[y] && s2[x]==s2[y])
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}