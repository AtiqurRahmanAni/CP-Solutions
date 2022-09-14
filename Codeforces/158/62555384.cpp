#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    vector<int>vec;
    int i,n,cnt4,cnt3,cnt2,cnt1,x,ans=0;
    cnt4=cnt3=cnt2=cnt1=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x==4)
            cnt4++;
        else if(x==3)
            cnt3++;
        else if(x==2)
            cnt2++;
        else if(x==1)
            cnt1++;
    }
    ans+=cnt4;
    int y,remcnt1,remcnt3;
    if(cnt3<=cnt1)
    {
        remcnt1=cnt1-cnt3;
        ans+=cnt3;
    }
    else
    {
        remcnt3=cnt3-cnt1;
        ans+=cnt3;
        remcnt1=0;
    }
    //cout<<ans<<endl;
    int make2=remcnt1/2;
    remcnt1=remcnt1%2;
    int make4=((make2+cnt2)*2)/4;
    ans+=make4;
    int remcnt2=((make2+cnt2)*2)%4;
    if(remcnt2+remcnt1==1||remcnt2+remcnt1==2||remcnt2+remcnt1==3)
        cout<<ans+1<<endl;
    else
        cout<<ans<<endl;
    return 0;
 
 
}