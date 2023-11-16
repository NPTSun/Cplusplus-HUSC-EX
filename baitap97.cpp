#include <bits/stdc++.h>
using namespace std;
long long int dequy(long long int n)
{
	if (n==0)
	{
		return 0;
	}
	else 
	{
		return dequy(n-1)+n;
	}
}
int main()
{
	long int n;
	cin>>n;
	cout<<dequy(n);
}
