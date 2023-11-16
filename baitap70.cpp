#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for (long int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for (long int i=1;i<n-1;i++)
	{
		if (A[i]>=A[i-1] && A[i]<=A[i+1])
		{
			cout<<"No"<<'\n';
			return 0;
		}
		else if (A[i]<=A[i-1] && A[i]>=A[i+1])
		{
			cout<<"No"<<'\n';
			return 0;
		}
	}
		cout<<"Yes"<<'\n';
		return 0;
}
