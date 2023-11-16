#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n-1];
	int B[n-1]={};
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
		B[i]=A[i];
	}
	for (int i=0;i<n-1;i++)
	{
		for (int j=n-1;j>i;j--)
		{
			if (B[j-1]<=B[j])
			{
				swap (B[j-1],B[j]);
			}
		}
	}
	for (int i=0;i<n;i++)
	for (int j=0;j<n;j++)
	{
		if (A[i]==B[j])
		{
			if (j==0)
			{
				cout<<j+1<<'\n';
				break;
			}
			else {
				while (B[j]==B[j-1])
				{
					j--;
				}
				cout<<j+1<<'\n';
				break;
			}
		}
	}
}
