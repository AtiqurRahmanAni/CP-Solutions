#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,i,n;
    string s;
    char ch,str[150];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ch;
        str[i]=ch;
        if(i>0)
        {
            if(str[i-1]==str[i])
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}