#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ara[15000];
int main()
{
 
    int n,cnt=0,flag1=0,flag2=0,i=0;
    string s;
    cin>>s;
    while(s[i]!=NULL)
    {
        if(s[i]=='4')
        {
            cnt++;
            flag1=1;
        }
        else if(s[i]=='7')
        {
            cnt++;
            flag2=1;
        }
        //cout<<s[i]<<endl;
        i++;
    }
    if(((flag1||flag2) && cnt==4) ||((flag2||flag1) && cnt==7))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}