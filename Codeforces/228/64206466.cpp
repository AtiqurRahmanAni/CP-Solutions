#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct student
{
    char name[100];
    int vol;
} ara[150];
int main()
{
    int ara[5],cnt=1,i;
    cin>>ara[0]>>ara[1]>>ara[2]>>ara[3];
    sort(ara,ara+4);
    for(i=0;i<4-1;i++)
    {
        if(ara[i]!=ara[i+1])
        {
            cnt++;
        }
    }
    cout<<4-cnt<<endl;
    return 0;
}