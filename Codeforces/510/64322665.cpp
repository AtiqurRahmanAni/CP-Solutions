#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,i,j,flag=0;
    cin>>a>>b;
    for(i=1; i<=a; i++)
    {
        for(j=1; j<=b; j++)
        {
            if(i%2==0 && flag==1 && j==b)
            {
                cout<<'#';
                //flag=1;
            }
            else if(i%2==0 && flag==0 && j==1)
            {
                cout<<'#';
                //flag=0;
            }
            else if(i%2==0)
                cout<<'.';
            if(i%2!=0)
            {
                cout<<'#';
                if(j==b)
                {
                    if(flag==0)
                        flag=1;
                    else
                        flag=0;
                }
            }
        }
        puts("");
    }
//puts("");
    return 0;
}