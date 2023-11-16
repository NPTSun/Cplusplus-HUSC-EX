#include <bits/stdc++.h>
using namespace std;
long int dequy(int n)
{
	if (n<=100)
	{
		return dequy(dequy(n+11));
	}
	else if (n>=101)
	{
		return n-10;
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<dequy(n)<<'\n';
}
