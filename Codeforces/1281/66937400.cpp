#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,mini,flag,j;
    string s,c,s1,s3;
    char a,b,inda,indb;
    cin>>t;
    while(t--)
    {
        cin>>s>>c;
        if(s<c)
            cout<<s<<endl;
        else
        {
            flag=0;
            s1=s;
            sort(s1.begin(),s1.end());
            for(i=0; i<s.size(); i++)
            {
                if(s[i]>s1[i])
                {
                    for(int j=i+1;j<s.size();j++)
                    {
                        swap(s[i],s[j]);
                        if(s<c)
                        {
                            cout<<s<<endl;
                            flag=1;
                            break;
                        }
                        swap(s[i],s[j]);
                    }
 
                }
                if(flag==1)
                    break;
 
            }
            if(flag==0)
                cout<<"---"<<endl;
        }
    }
    return 0;
}