#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,a[100],b[100],i;
    //freopen("test.txt","r",stdin);
    cin>>t;
    string s1,s2;
    while(t--)
    {
        set<char>track;
        string s3="",s4;
        int flag=0;
        cin>>s1>>s2;
        if(s1.size()>s2.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        s4=s1;
        sort(s4.begin(),s4.end());
        for(i=0; s1[i]; i++)
            track.insert(s1[i]);
        for(i=0; i<=s2.size()-s1.size(); i++)
        {
            int cnt=0,k=i;
            s3="";
            for(int j=0; j<s1.size(); j++)
            {
                s3+=s2[k++];
            }
            sort(s3.begin(),s3.end());
            if(s4==s3)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
 
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
    return 0;
}