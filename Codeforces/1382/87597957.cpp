#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s1>>s2;
        vector<int>vec;
        for(i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
            {
                if(i==0)
                {
                    vec.push_back(i+1);
                }
                else
                {
                    vec.push_back(i+1);
                    vec.push_back(1);
                    vec.push_back(i+1);
                }
            }
        }
        cout<<vec.size()<<endl;
        for(i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        puts("");
    }
    return 0;
}