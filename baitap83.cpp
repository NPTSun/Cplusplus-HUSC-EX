#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n][n];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	int s=0;
		for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
		if (i==j)
		{
			s+=A[i][j];
		}}}

		for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
		if (i+j==n-1 && i!=j)
		{
			s+=A[i][j];
		}}}
		cout<<s;
		}
