#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,low,high,mid;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>vec(n+1,0);
        int step=1;
        set<pair<int,pair<int,int>>>track;
        track.insert({-n,{1,n}});
        while(!track.empty())
        {
            pair<int,pair<int,int>>p=*track.begin();
            low=p.second.first;
            high=p.second.second;
            track.erase(p);
            //cout<<low<<' '<<high<<endl;
            /*if(low==high)
            {
                mid=(low+high)/2;
                vec[mid]=i;
                track.pop();
            }*/
            if(low>high)
            {
                continue;
            }
            if(low==high)
            {
                vec[low]=step;
                step++;
                continue;
            }
            if((high-low+1)&1)
            {
                mid=(high+low)/2;
                vec[mid]=step;
                track.insert({-(mid-low),{low,mid-1}});
                track.insert({-(high-mid),{mid+1,high}});
                step++;
            }
            else
            {
                mid=(high+low-1)/2;
                vec[mid]=step;
                track.insert({-(mid-low),{low,mid-1}});
                track.insert({-(high-mid),{mid+1,high}});
                step++;
            }
            /*for(int x=1;x<=n;x++)
            cout<<vec[x]<<' ';
            puts("");*/
        }
        for(int x=1;x<=n;x++)
            cout<<vec[x]<<' ';
        puts("");
 
 
    }
    return 0;
}