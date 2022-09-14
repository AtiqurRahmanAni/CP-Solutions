#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t,i,j,n,k;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>k;
        cin>>s;
        int cnt=0;
        vector<int>one;
        stack<int>stc;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
                one.push_back(i);
        }
        int sz=one.size();
        int ind=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                if(one.empty()==true || abs(one[ind]-i)>k)
                {
                    if(stc.empty()==true)
                    {
                        stc.push(i);
                        cnt++;
                        s[i]='1';
                    }
                    else if(abs(stc.top()-i)>k)
                    {
                        stc.push(i);
                        cnt++;
                        s[i]='1';
                    }
                }
            }
            if(one.empty()==false)
            {
                if(i>one[ind] && ind+1<sz)
                    ind++;
            }
            if(s[i]=='1')
                stc.push(i);
 
        }
        cout<<cnt<<endl;
    }
    return 0;
}