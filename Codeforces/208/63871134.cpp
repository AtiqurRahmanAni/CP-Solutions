#include<bits/stdc++.h>
using namespace std;
int process(int n)
{
    int sum=0;
    while(n)
    {
        sum+=powl(n%10,2);
        n/=10;
    }
    return sum;
}
int main()
{
 
    string s,s1;
    int i,cnt=0;
    cin>>s;
    for(i=0; s[i]!=NULL;)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(cnt!=0)
                s1.push_back(' ');
            i+=3;
 
        }
        else
        {
            if(i<s.size())
            {
                s1.push_back(s[i]);
                cnt++;
            }
            i++;
        }
    }
    cout<<s1<<endl;
    return 0;
}