#include <bits/stdc++.h>
using namespace std;
int dequy(int m, int n)
{
	if (m==0)
	{
		return n+1;
	}
	else if (m>0 && n==0)
	{
		return dequy(m-1,1);
	}
	else if (m>0 && n>0)
	{
		return dequy(m-1,dequy(m,n-1));
	}
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<dequy(m,n)<<'\n';
}
