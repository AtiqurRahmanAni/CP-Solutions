#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<4)
            cout<<-1<<endl;
        else
        {
            for(int i=n;i>=1;i--)
            {
                if(i&1)
                    cout<<i<<' ';
            }
            cout<<4<<' '<<2<<' ';
            for(int i=6;i<=n;i++)
            {
                if(!(i&1))
                    cout<<i<<' ';
            }
            puts("");
        }
    }
    return 0;
}