#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,flag=0,cnt,i,j;
        cin>>n>>x>>y;
        vector<int>vec,vec1(n);
        int start=1;
        for(i=start; i<=49; i++)
        {
            cnt=2;
            int ind=0;
            vec.push_back(x);
            while(1)
            {
                vec.push_back(vec[ind]+i);
                ind++;
                cnt++;
                if(vec[ind]==y)
                {
                    /*for(int j=0;j<cnt-1;j++)
                    {
                        vec1[j]=(vec[j]);
                    */
                    flag=1;
                    break;
                }
                if(cnt>n)
                {
                    vec.clear();
                    break;
                }
            }
            if(flag==1)
                break;
        }
        int ream=n-vec.size();
        int diff=vec[1]-vec[0];
        int temp=x-diff;
        while(1)
        {
            if(ream==0 || temp<=0)
                break;
            cout<<temp<<" ";
            temp-=diff;
            ream--;
        }
        temp=y+diff;
        while(ream!=0)
        {
            cout<<temp<<" ";
            temp+=diff;
            ream--;
        }
        for(i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        puts("");
    }
    return 0;
}