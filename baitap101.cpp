#include <bits/stdc++.h>
using namespace std;
int dequy(int m, int n)
{
	if (m==0 || m==n)
	{
		return 1;
	}
	else if (n>m && m>0)
	{
		return dequy(m-1,n-1)+dequy(m,n-1);
	}
}
int main()
{
	int m,n;
	cin>>n>>m;
	cout<<dequy(m,n);
}
