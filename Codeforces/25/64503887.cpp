#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int n,i;
    string s;
    cin>>n;
    cin>>s;
    if(n%2==0)
    {
        for(i=0; i<n; i++)
        {
            if(i%2==0 && i!=0)
                cout<<'-';
            cout<<s[i];
        }
    }
    else
    {
        int three=(n/3)-1;
        int two=(n/2)-1;
        for(i=0; i<n; i++)
        {
            if(i%2==0 && i!=0 && two)
            {
                cout<<'-';
                two--;
            }
            cout<<s[i];
        }
    }
    puts("");
 
    return 0;
}