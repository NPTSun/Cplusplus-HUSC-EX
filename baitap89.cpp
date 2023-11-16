#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,dem=0;
	cin>>m>>n;
	int A[m][n];
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>A[i][j];
			if (A[i][j]==0)
			{
				dem++;
			}
		}
	}
	if (dem>=(double(m*n)/2.0))
	{
		cout<<"Yes";
	}
	else 
	{
		cout<<"No";
	}
}
