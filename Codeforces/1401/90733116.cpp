#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t,n;
    ll x1,y1,z1,x2,y2,z2;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;
        ll maxi=min(z1,y2);
 
        y2-=min(maxi,y2);
        z1-=min(maxi,z1);
 
        /*cout<<"-----------"<<endl;
        cout<<x1<<' '<<y1<<' '<<z1<<endl;
        cout<<x2<<' '<<y2<<' '<<z2<<endl;*/
        ll zero=x1+x2;
        y1-=min(y1,y2);
        y2-=min(y1,y2);
        z1-=min(z1,z2);
        z2-=min(z1,z2);
 
        /*cout<<"-----+-----"<<endl;
        cout<<x1<<' '<<y1<<' '<<z1<<endl;
        cout<<x2<<' '<<y2<<' '<<z2<<endl;*/
        ll temp;
        temp=z2;
        z2-=min(x1,z2);
        x1-=min(x1,temp);
 
        temp=y2;
        y2-=min(x1,y2);
        x1-=min(x1,temp);
 
        temp=z1;
        z1=min(x2,z1);
        x2-=min(x2,temp);
 
        temp=y1;
        y1-=min(x2,y1);
        x2-=min(x2,temp);
        /*cout<<"---------"<<endl;
        cout<<x1<<' '<<y1<<' '<<z1<<endl;
        cout<<x2<<' '<<y2<<' '<<z2<<endl;*/
 
        ll ans=maxi*2-y1*2;
        cout<<ans<<endl;
 
    }
    return 0;
}