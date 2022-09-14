#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int l,r,d,u;
    int x,y,x1,y1,x2,y2;
    int t,step1,step2,t1,t2;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>l>>r>>d>>u;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if(l>r)
        {
            step1=l-r;
            t1=x-x1;
            if(step1>t1)
                flag=1;
        }
        else
        {
            step1=r-l;
            t1=x2-x;
            if(step1>t1)
                flag=1;
        }
        if(d>u)
        {
            step2=d-u;
            t2=y-y1;
            if(step2>t2)
                flag=1;
        }
        else
        {
            step2=u-d;
            t2=y2-y;
            if(step2>t2)
                flag=1;
        }
        step1=(x2-x)+(x-x1);
        step2=(y2-y)+(y-y1);
        if((step1==0&&(l!=0||r!=0))||(step2==0&&(u!=0||d!=0)))
           flag=1;
        if(flag)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}