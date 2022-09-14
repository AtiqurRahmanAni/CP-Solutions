#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,l=0,r=0;
    char ch;
    cin>>n;
    while(n--)
    {
        cin>>ch;
        if(ch=='L')
            l++;
        else
            r++;
    }
    cout<<l+r+1<<endl;
    return 0;
}