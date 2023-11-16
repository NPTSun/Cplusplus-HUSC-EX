#include <bits/stdc++.h>
using namespace std;
long long int dequy( int a, int b, int c, long long int n)
{
if (n==0)
{
	return a;
}
else if(n>0)
{		return dequy(a,b,c,n-1) + b*n +c;
}}
int main()
{
        ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	cout<<dequy(a,b,c,n);
	return 0;
}
