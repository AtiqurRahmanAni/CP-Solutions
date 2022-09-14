#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,cnt,posind,flag;
    //freopen("test.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        vector<string>pin,sameid;
        set<string>uniq;
        bool track[15];
        int position[15];
        string s;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>s;
            pin.push_back(s);
            uniq.insert(s);
        }
        cnt=posind=0;
        memset(track,0,sizeof(track));
        memset(position,0,sizeof(position));
        for(i=0; i<n; i++)
        {
            if(track[i]==1)
                continue;
            for(j=i+1; j<n; j++)
            {
                if(pin[i]==pin[j])
                {
                    cnt++;
                    track[j]=1;
                    position[posind++]=j;
                    sameid.push_back(pin[j]);
                }
            }
        }
        posind=flag=0;
        for(int k=0; k<cnt; k++)
        {
            s=sameid[k];
            for(i=0; i<4; i++)
            {
                for(j='0'; j<='9'; j++)
                {
                    s[i]=j;
                    if(uniq.count(s)==false)
                    {
                        pin[position[posind]]=s;
                        uniq.insert(s);
                        posind++;
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
        }
        //puts("");
        cout<<cnt<<endl;
        for(i=0; i<n; i++)
            cout<<pin[i]<<endl;
 
    }
    return 0;
}