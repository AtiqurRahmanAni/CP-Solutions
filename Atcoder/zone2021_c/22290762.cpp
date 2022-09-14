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
void print(vector<int>&vec)
{
	int sz = vec.size();
	for (int i = 1; i < sz; i++)
	{
		cout << vec[i] << " ";
	}
	line;
}
void print(vector<pair<int, int>>&vec)
{
	int sz = vec.size();
	for (int i = 0; i < sz; i++)
	{
		cout << vec[i].first << " " << vec[i].second << endl;
	}
	line;
}
double D, H, d, h;
double solve()
{
	double pi = 2*acos(0.0);
	double temp1 = H-h;
	double temp2 = D-d;
	double otivuj= sqrt((temp1*temp1)+(temp2*temp2));
	double a = otivuj*otivuj;
	double b = temp1*temp1;
	double c = temp2*temp2;
	// cerr<<a<<" "<<b<<" "<<c<<" "<<endl;
	// cerr<<((a+b)-c)/(2*otivuj*temp1)<<endl;
	double angle1 = acos(((a+b)-c)/(2*otivuj*temp1));
	angle1 = (angle1*180.0)/pi;
	//cerr<<angle1<<endl;
	double angle2=(90-angle1);
	cerr<<angle2<<endl;
	double bahu = D/cos((angle2*pi)/180.0);	
	//cerr<<bahu<<endl;	
	double ans = sqrt((bahu*bahu)-(D*D));
	return H-ans;
}
int main()
{
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t start, end;
	start = clock();
#endif

	int n;
	cin >> n >> D >> H;
	double ans=0.0;
	for (int i = 0; i < n; i++)
	{
		cin >> d >> h;
		ans=max(ans,solve());
	}
	printf("%.15f\n",ans);

#ifndef ONLINE_JUDGE
	end = clock();
	printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
	return 0;
}