#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,i;
	cin>>n;
	vector<int>A(n);
	for (i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int max=A[0];
	int min=A[0];
	int kcmax=0,kcmin=0;
	for (i=0;i<n;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
			kcmax=i;
		}
		if (A[i]<min)
		{
			min=A[i];
			kcmin=i;
		}}
	kcmax++;
	kcmin++;
	if (kcmax>kcmin)
	{
		cout<<kcmax-kcmin<<'\n';
	}
	else if (kcmax<kcmin)
	{
		cout<<kcmin-kcmax<<'\n';
	}
	else
	{
		cout<<0<<'\n';
	}
	return 0;
}
