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
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define inf 2e18
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<'\n'
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
int main()
{
 fastIO
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 clock_t start, end;
 start = clock();
#endif
 
 int t;
 cin>>t;
 while(t--)
 {
  string s;
  cin>>s;
  int sz=s.size();
  stack<int>left,question;
  int flag=1;
  for(int i=0;i<sz;i++)
  {
   if(s[i]=='(')
    left.push(i);
   else if(s[i]=='?')
    question.push(i);
   else if(s[i]==')')
   {
    if(left.empty())
    {
     if(question.empty())
     {
      flag=0;
      break;
     }
     else
     {
      int ind = question.top();
      s[ind]=s[i]='0';
     }
    }
    else
    {
     s[left.top()]=s[i]='0';
    }
   }
  }
  if(flag)
  {
   for(int i=0;i<sz;i++)
   {
    for(int j=i+1;j<sz;j++)
    {
     if(s[j]=='0')
      continue;
     if((s[i]=='(' or s[i]=='?') and (s[j]=='?' or s[j]==')'))
     {
      s[i]=s[j]='0';
     }
    }
   }
   for(int i=0;i<sz;i++)
   {
    if(s[i]!='0')
    {
     flag=0;
     break;
    }
   }
  }
  if(flag)
   cout<<"YES\n";
  else
   cout<<"NO\n";
 }
 
#ifndef ONLINE_JUDGE
 end = clock();
 printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
 return 0;
}