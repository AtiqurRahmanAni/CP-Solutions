#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    set<string>st;
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        st.insert(s);
    }
    cout<<(int)st.size()<<endl;
    return 0;
}
