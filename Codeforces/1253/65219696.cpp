#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,flag=0,day=0,event=0,temp=0,flag1=0,temp1;
    vector<int>v,v1,v2;
    set<int>s,s1,s2;
    set<int>::iterator it;
    queue<int>q;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x>0)
        {
            if(!s.empty())
            {
                if(s1.count(x))
                {
                    flag=1;
                }
            }
            if(s.count(x))
                flag=1;
            s.insert(x);
        }
        else if(x<0)
        {
            if(!s.empty())
            {
                if(s.count(abs(x)))
                {
                    event++;
                    it=s.find(abs(x));
                    s1.insert(abs(x));
                    s.erase(it);
                    if(s.empty())
                    {
                        v2.push_back(event*2);
                        s1.clear();
                        day++;
                        event=0;
                    }
                }
            }
            else
            {
                flag=1;
            }
        }
    }
    if(flag==1 || !s.empty())
        cout<<-1<<endl;
    else
    {
        cout<<day<<endl;
        for(int y:v2)
            cout<<y<<' ';
        puts("");
    }
 
    return 0;
}