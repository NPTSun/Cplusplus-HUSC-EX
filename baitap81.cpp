#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int A[m][n],B[n][m];
	int j=0;
	for (int i=0;i<m;i++)
	{
		B[j][i]=A[i][j];
		for ( j=0;j<n;j++)
		{
			cin>>A[i][j];
			B[j][i]=A[i][j];
		}
	}
	for (int j=0;j<n;j++)
	{
		for (int i=0;i<m;i++)
		{
			cout<<B[j][i]<<" ";
		}
		cout<<'\n';
	}
}
