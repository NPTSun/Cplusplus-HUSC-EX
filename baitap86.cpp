#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int A[m][n],B[m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
		for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>B[i][j];
		}
	}
		for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			int	s=A[i][j]+B[i][j];
			cout<<s<<" ";
		}
		cout<<'\n';
	}
}
