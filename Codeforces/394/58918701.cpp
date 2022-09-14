#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0,i;
    string s;
    cin>>s;
    for(i=0; s[i]!='+'; i++)
    {
        a++;
    }
    i++;
    for(; s[i]!='='; i++)
    {
        b++;
    }
    c=s.size()-(a+b+2);
    if(a+b==c)
    {
        cout<<s<<endl;
    }
    else if((a+b)==c+2)
    {
        if(a!=1)
            a--;
        else
            b--;
        for(i=1; i<=a; i++)
            cout<<"|";
        cout<<"+";
        for(i=1; i<=b; i++)
            cout<<"|";
        cout<<"=";
        for(i=1; i<=c+1; i++)
            cout<<"|";
        puts("");
 
    }
    else if((a+b)+2==c)
    {
        if(a!=1)
            a++;
        else
            b++;
        c--;
        for(i=1; i<=a; i++)
            cout<<"|";
        cout<<"+";
        for(i=1; i<=b; i++)
            cout<<"|";
        cout<<"=";
        for(i=1; i<=c; i++)
            cout<<"|";
        puts("");
    }
    else
    {
        cout<<"Impossible"<<endl;
    }
    return 0;
}