#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	double x=0;
	for (double i=1;i<=n;i++)
	{
		x=x+1/i;
	}
	cout<<setprecision(6)<<fixed<<x;
	return 0;
}
