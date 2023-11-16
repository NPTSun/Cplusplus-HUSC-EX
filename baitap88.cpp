#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>n;
	int A[n][n];
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>A[i][j];	}
}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (i==j)
			{
				if (A[i][j]!=1)
				{
					cout<<"No";
					exit(0);
				}
			}
			else if (i!=j)
			{
				if (A[i][j]!=0)
				{
					cout<<"No";
					exit(0);
				}
			}
		}
}
cout<<"Yes";
}
