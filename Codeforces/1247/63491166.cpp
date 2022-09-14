#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int a,b;
    cin>>a>>b;
    if(a+1==b)
        printf("%d %d\n",(a*100)+99,b*100);
    else if(a==b)
        printf("%d %d\n",a*10,(a*10)+1);
    else if(a>b)
    {
        int diff=(b*10)-a;
        if(diff==1)
            printf("%d %d\n",a,b*10);
        else
            printf("-1\n");
    }
    else
        cout<<-1<<endl;
    return 0;
}