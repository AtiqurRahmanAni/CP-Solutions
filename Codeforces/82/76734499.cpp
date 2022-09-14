#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,temp,temp1,temp2,temp3,temp4;
    cin>>n;
    int flag=0;
    ll c=1,ans=1,prev_ans,prev_c;
    while(1)
    {
        //cout<<ans<<' '<<(ans+c)-1<<endl;
        if(ans==n)
        {
            flag=1;
            break;
        }
        if(ans>n)
            break;
        prev_ans=ans;
        prev_c=c;
        ans=ans+5*c;
        c*=2;
    }
    if(flag)
    {
        temp=(ans+c);
        temp1=temp+c;
        temp2=temp1+c;
        temp3=temp2+c;
        temp4=temp3+c;
    }
    else
    {
        ans=prev_ans;
        c=prev_c;
        temp=ans+c;
        temp1=temp+c;
        temp2=temp1+c;
        temp3=temp2+c;
        temp4=temp3+c;
    }
    /*cout<<ans<<' '<<(ans+c)-1<<endl;
    cout<<temp<<' '<<(temp+c)-1<<endl;
    cout<<temp1<<' '<<(temp1+c)-1<<endl;
    cout<<temp2<<' '<<(temp2+c)-1<<endl;
    cout<<temp3<<' '<<(temp3+c)-1<<endl;
    cout<<temp4<<' '<<(temp4+c)-1<<endl;*/
    if(n>=ans && n<=(ans+c)-1)
        cout<<"Sheldon"<<endl;
    else if(n>=temp && n<=(temp+c)-1)
        cout<<"Leonard"<<endl;
    else if(n>=temp1 && n<=(temp1+c)-1)
        cout<<"Penny"<<endl;
    else if(n>=temp2 && n<=(temp2+c)-1)
        cout<<"Rajesh"<<endl;
    else if(n>=temp3 && n<=(temp3+c)-1)
        cout<<"Howard"<<endl;
    return 0;
}