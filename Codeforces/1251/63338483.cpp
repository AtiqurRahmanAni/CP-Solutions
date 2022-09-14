#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,l,flag,flag1;
    set<char>setter;
    set<char>::iterator it;
    string s,s2;
    char c,b;
    cin>>n;
    getchar();
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        if(s.size()==1)
            cout<<s<<endl;
        else
        {
            k=0;
            l=0,flag=0,flag1=0;
            for(int j=0; j<s.size();)
            {
                if(j==s.size()-1)
                {
                    setter.insert(s[j]);
                    j++;
                }
                else
                {
                    c=s[j];
                    b=s[j+1];
                    if(c==b)
                    {
 
                        j+=2;
 
                    }
                    else
                    {
                        setter.insert(c);
                        j++;
                    }
                }
            }
            for(it=setter.begin(); it!=setter.end(); it++)
                cout<<*it;
            cout<<endl;
            s.clear();
            s2.clear();
            setter.clear();
        }
    }
    return 0;
}