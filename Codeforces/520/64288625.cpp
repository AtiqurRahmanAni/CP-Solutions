#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    set<char>s;
    string s1;
    int n,i;
    cin>>n;
    cin>>s1;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    for(i=0;s1[i];i++)
    {
        s.insert(s1[i]);
    }
    if(s.size()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}