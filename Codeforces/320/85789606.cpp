#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    int i,sz,flag=0;
    cin>>s;
    sz=s.size();
    for(i=0;i<sz;)
    {
        if(i+1<sz && s[i]=='1' && s[i+1]=='1')
            i++;
        else if(i+2<sz && s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4')
            i+=3;
        else if(i+1<sz && s[i]=='1' && s[i+1]=='4')
            i+=2;
        else
        {
            if(i==sz-1 && s[i]=='1')
            {
                break;
            }
            flag=1;
            break;
        }
    }
    if(!flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}