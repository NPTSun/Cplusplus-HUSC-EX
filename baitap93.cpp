#include <bits/stdc++.h>
using namespace std;
long long ham(int x,int n)
{
	int tong=-1;
	if (n%2!=0)
	{
		n=n-1;
		for (int i=0;i<=x;i+=2)
		{
			tong+=pow(x,i);
		}
	}
	else {
		for (int i=0;i<=x;i+=2)
		{
			tong+=pow(x,i);
		}
	}
	return tong;
}
int main()
{
	int x,n;
	cin>>x>>n;
	cout<<ham(x,n);
}
