#include <bits/stdc++.h>
using namespace std;
bool armstrong(int n)
{
	int dem=0,n1=n,n2=n;
	while (n2>0)
	{
		dem++;
		n2/=10;
	}
	int s=0;
	while (n1>0)
	{
		int mul=n1%10;
		s+=pow(mul,dem);
		n1/=10;
	}
	if (s==n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n;
	cin>>n;
	int A[n],dem=0;;
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
		if (armstrong(A[i])==true)
		{
			dem++;
		}
	}
	cout<<dem;
}
