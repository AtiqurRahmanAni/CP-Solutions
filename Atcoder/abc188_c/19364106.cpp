    #include<iostream>
    #include<vector>
    #include<queue>
    #include<stack>
    #include<algorithm>
    #include<set>
    #include<iterator>
    #include <map>
    #include<cmath>
    #include <list>
    #include<string>
    #include <stdlib.h>
    #include<ctime>
    #include<cstring>
    #define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
    #define PI 2*acos(0.0)
    #define mod 1e09+7
    #define inf 2e18
    typedef long long ll;
    typedef unsigned long long ull;
    #define line cout<<endl
    using namespace std;
    int fy[] = {0, 0, 1, -1};
    int fx[] = { -1, 1, 0, 0};
    int ara[1001];
    int graph[1001][1001];
    int main()
    {
        fastIO
    #ifndef ONLINE_JUDGE
        clock_t start, end;
        start = clock();
    #endif

        int n;
        cin>>n;
        int nn=powl(2,n);
        vector<pair<ll,int>>ara(nn+1);
        for(int i=1;i<=nn;i++)
        {
            cin>>ara[i].first;
            ara[i].second=i;
        }
        if(n==1)
        {
            if(ara[1].first>ara[2].first)
            {
                cout<<ara[2].second<<endl;
            }
            else
            {
                cout<<ara[1].second<<endl;
            }
            return 0;
        }
        int k=nn;
        int l=nn;
        int temp=nn;
        while(1)
        {
            nn/=2;
            int j=1;
            k=temp;
            l=temp;
            for(int i=1;i<=nn;i+=2)
            {
                if(ara[i]>ara[i+1])
                {
                    ara[j].first=ara[i].first;
                    ara[j].second=ara[i].second;
                }
                else
                {
                    ara[j].first=ara[i+1].first;
                    ara[j].second=ara[i+1].second;
                }
                j++;
                if(ara[k]>ara[k-1])
                {
                    ara[l].first=ara[k].first;
                    ara[l].second=ara[k].second;
                }
                else
                {
                    ara[l].first=ara[k-1].first;
                    ara[l].second=ara[k-1].second;
                }
                l--;
                k-=2;
            }
            /*for(int i=1;i<=powl(2,n);i++)
            {
                cout<<ara[i].first<<" ";
            }
            line;*/
            if(nn==1)
                break;
        }
        // cout<<nn<<endl;
        // cout<<ara[1].first<<" "<<ara[2].first<<endl;
        if(ara[1].first>ara[temp].first)
        {
            cout<<ara[temp].second<<endl;
        }
        else
        {
            cout<<ara[1].second<<endl;
        }




    #ifndef ONLINE_JUDGE
        end = clock();
        printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
    #endif
        return 0;
    }
