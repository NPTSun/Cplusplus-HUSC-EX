#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n,t;
	cin>>n;
	t=1;
	if (n==1 || n==0)
	{
		cout<<1<<'\n';
		return 0;
	}
	else if (n%2!=0)
	{
		for (int i=1;i<=n;i=i+2)
		{
			t=t*i;
		}
	}
	else if (n%2==0)
	{
		for (int i=2;i<=n;i=i+2)
		{
			t=t*i;
		}
	}
		cout<<t<<'\n';
	return 0;
}
