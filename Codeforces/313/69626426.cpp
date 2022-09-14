#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        string s1="",s2="",a;
        a=to_string(n);
        for(int i=0;i<(int)a.size();i++)
        {
            if(i!=(int)a.size()-2)
                s1+=a[i];
            if(i!=(int)a.size()-1)
                s2+=a[i];
        }
        int x=stoi(s1);
        int y=stoi(s2);
        if(x>y)
            cout<<x<<endl;
        else
            cout<<y<<endl;
    }
    return 0;
}