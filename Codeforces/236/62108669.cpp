#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>s;
    string s1;
    cin>>s1;
    for(int i=0;i<s1.size();i++)
    {
        s.insert(s1[i]);
    }
    if(s.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}