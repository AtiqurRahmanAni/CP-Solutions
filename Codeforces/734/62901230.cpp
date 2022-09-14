#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int n,cnta=0,cntd=0;
    char ch;
    cin>>n;
    while(n--)
    {
        cin>>ch;
        if(ch=='A')
            cnta++;
        else
            cntd++;
    }
    if(cnta>cntd)
        cout<<"Anton"<<endl;
    else if(cnta<cntd)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}