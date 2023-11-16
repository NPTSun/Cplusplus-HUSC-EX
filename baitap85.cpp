#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,p;
	cin>>m>>n>>p;
	int A[m][n],B[n][p];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	for (int j=0;j<n;j++)
	{
		for (int k=0;k<p;k++)
		{
			cin>>B[j][k];
		}
	}
	for (int i=0;i<m;i++)
	{
		for (int k=0;k<p;k++)
		{
				int s=0;
			for (int j=0;j<n;j++)
			{
				s=s+A[i][j]*B[j][k];
			}
				cout<<s<<" ";
		}
		cout<<'\n';
	}
}
