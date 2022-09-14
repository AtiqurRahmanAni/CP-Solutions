#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,x,i,flag=0;
    set<int>s;
    cin>>a>>b;
    for(i=a; i<=b; i++)
    {
        x=i;
        while(x)
        {
            s.insert(x%10);
            x/=10;
        }
        if((int)log10(i)+1==s.size())
        {
            cout<<i<<endl;
            flag=1;
            break;
        }
        s.clear();
    }
    if(flag==0)
        cout<<-1<<endl;
return 0;
}