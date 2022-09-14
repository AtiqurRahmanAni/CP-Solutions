#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch;
    long long ans=0;
    set<char>track;
    int n,k;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<k;i++)
    {
        cin>>ch;
        track.insert(ch);
    }
    long long cnt=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(track.count(s[i]))
        {
            cnt++;
        }
        else
        {
            ans+=((cnt)*(cnt+1))/2;
            cnt=0;
        }
    }
    ans+=((cnt)*(cnt+1))/2;
    cout<<ans<<endl;
    return 0;
}