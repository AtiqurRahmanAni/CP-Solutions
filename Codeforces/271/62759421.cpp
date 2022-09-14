#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<int>s;
int check(int x)
{
    int y=x;
    s.clear();
    while(x)
    {
        s.insert(x%10);
        x/=10;
    }
    if(s.size()==(int)log10(y)+1)
        return true;
    else
        return false;
 
 
 
}
int main()
{
 
    int x,i;
    cin>>x;
    x++;
    for(i=x;;i++)
    {
        if(check(i)==true)
            break;
    }
    cout<<i<<endl;
    return 0;
}