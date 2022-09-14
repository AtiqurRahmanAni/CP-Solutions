#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    char s[120],s1[]="hello";
    int i,j,cnt=0,k;
    cin>>s;
    k=0;
    for(i=0;s1[i]!=NULL;i++)
    {
        for(j=k;s[j]!=NULL;j++)
        {
            if(s1[i]==s[j])
            {
                cnt++;
                k=j+1;
                break;
            }
        }
    }
    if(cnt==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}