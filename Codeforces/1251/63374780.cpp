#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,i,j,flag;
    char ch;
    string s,even,odd,ans;
    cin>>t;
    while(t--)
    {
        cin>>s;
        i=0;
        while(s[i]!=NULL)
        {
            if((s[i]-'0')%2==0)
                even.push_back(s[i]);
            else
                odd.push_back(s[i]);
            i++;
        }
        puts("");
        i=j=0;
        while(i<even.size()||j<odd.size())
        {
            if(i==even.size())
                ans.push_back(odd[j++]);
            else if(j==odd.size())
                ans.push_back(even[i++]);
            else if(even[i]<odd[j])
                ans.push_back(even[i++]);
            else
                ans.push_back(odd[j++]);
        }
        cout<<ans<<endl;
        even.clear();
        odd.clear();
        ans.clear();
 
    }
    return 0;
}