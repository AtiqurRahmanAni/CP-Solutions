#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
 
int main()
{
    string s;
    int i,cnt=0;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')
            cnt++;
    }
    if(cnt>=2)
        cout<<(s.size()+1)/2<<endl;
    else
        cout<<s.size()/2<<endl;
    return 0;
}