#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,temp,ss1="",ss2="";
    int sz=0,i,sz1,flag=0,j;
    getline(cin,s1);
    getline(cin,s2);
    stringstream ss(s2);
    vector<string>vec;
    while(ss>>temp)
    {
        //cout<<temp<<endl;
        vec.push_back(temp);
        ss2+=temp;
        sz++;
    }
    stringstream sss(s1);
    while(sss>>temp)
    {
        //cout<<temp<<endl;
        ss1+=temp;
    }
    sort(ss1.begin(),ss1.end());
    sort(ss2.begin(),ss2.end());
    //cout<<ss1<<'\n'<<ss2<<endl;
    sz=ss2.size();
    sz1=ss1.size();
    for(i=0;i<sz;i++)
    {
        flag=0;
        for(j=0;j<sz1;j++)
        {
            if(ss1[j]=='*')
                continue;
            if(ss2[i]==ss1[j])
            {
                ss1[j]='*';
                flag=1;
                break;
            }
        }
        if(flag==0)
            break;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}