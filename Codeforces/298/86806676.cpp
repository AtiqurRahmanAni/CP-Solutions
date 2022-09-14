#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,sx,sy,ex,ey,i,ans=0,flag=0,flag1=0;
    cin>>t>>sx>>sy>>ex>>ey;
    cin>>s;
    /*sx=abs(sx);
    sy=abs(sy);
    ex=abs(ex);
    ey=abs(ey);*/
    for(i=0;i<t;i++)
    {
        if(sx<ex)
        {
            if(s[i]=='E' && flag==0)
            {
                sx++;
                if(sx==ex)
                    flag=1;
                ans=i+1;
            }
        }
        else if(sx>ex)
        {
            if(s[i]=='W' && flag==0)
            {
                sx--;
                if(sx==ex)
                    flag=1;
                ans=i+1;
            }
        }
        if(sy<ey)
        {
            if(s[i]=='N' && flag1==0)
            {
                sy++;
                if(sy==ey)
                    flag1=1;
                ans=i+1;
            }
        }
        else if(sy>ey)
        {
            if(s[i]=='S' && flag1==0)
            {
                sy--;
                if(sy==ey)
                    flag1=1;
                ans=i+1;
            }
        }
    }
    if((sx==ex) && (sy==ey))
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
 
 
 
 