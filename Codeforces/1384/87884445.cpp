#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n];
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        char ch='a';
        string s="";
        for(i=0;i<50;i++)
        {
            //cout<<ch;
            s+=ch;
            ch++;
            if(ch>'z')
                ch='a';
        }
        //cout<<s<<endl;
        vector<string>vec;
        vec.push_back(s);
        string s1;
        int sz=0;
        for(i=0;i<n;i++)
        {
            s=vec[sz++];
            for(j=0;j<ara[i];j++)
            {
                s1+=s[j];
            }
            for(;j<50;j++)
            {
                ch=s[j]+1;
                if(ch>'z')
                    ch='a';
                s1+=ch;
            }
            vec.push_back(s1);
            s1="";
        }
        for(i=0;i<=n;i++)
        {
            cout<<vec[i]<<endl;
        }
    }
    return 0;
}