#include <bits/stdc++.h>
using namespace std;
int tsp(int A[],int n,int k)
{
	for (int i=n-k;i<n;i++)
	{
		for (int j=0;j<k;j++)
		{
			A[k]=A[i];
		}
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	int A[n];
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	tsp(A,n,k);
	for (int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
