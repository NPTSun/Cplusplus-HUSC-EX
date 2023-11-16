#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	long a[m][n];
	for ( int i=0;i<m;i++)
	{
	for ( int j=0;j<n;j++)
	{
		cin>>a[i][j];
	}}
		for ( int j=0;j<n;j++)
		{
			long s=0;
	for ( int i=0;i<m;i++){
		s+=a[i][j];
	}
	cout<<s<<" ";
	}
}
