#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for (int i=0;i<n-1;i++)
	{
		if (A[i]>A[i+1])
		{
			cout<<"No"<<'\n';
			return 0;
		}
	}
	cout<<"Yes"<<'\n';
	return 0;
}
