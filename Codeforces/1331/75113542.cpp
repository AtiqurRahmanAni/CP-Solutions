#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    cin >> hex >> x;
    if(x%2==0)
        cout<<0<<endl;
    else
        cout<<1<<endl;
 
    return 0;
}