#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>m>>n;
	int A[m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	for (int i=0;i<m;i++)
	{
	int maxj=A[i][0];
		for (int j=1;j<n;j++)
		{
			if (maxj<A[i][j])
			{
				maxj=A[i][j];
			}
		}
		cout<<maxj<<" ";
	}
	cout<<'\n';
	for (int j=0;j<n;j++)
	{
		int maxi=A[0][j];
		for (int i=1;i<m;i++)
		{
			if (maxi<A[i][j])
			{
				maxi=A[i][j];
			}
		}
		cout<<maxi<<" ";
	}
}
