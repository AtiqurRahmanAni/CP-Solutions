#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ara[15000];
int main()
{
 
    int n,cnt=0,flag1=0,flag2=0,i=0;
    string s,s1;
    cin>>s>>s1;
    reverse(s1.begin(),s1.end());
    if(s1==s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}