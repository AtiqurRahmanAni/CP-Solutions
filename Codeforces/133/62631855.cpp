#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    char ch;
    string s;
    int i,flag=0;
    cin>>s;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;
 
    return 0;
}