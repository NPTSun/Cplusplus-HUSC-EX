#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,dem1=0,dem2=0;
	cin>>n;
	vector<int>A(n);
	vector<int>B(n);
	for (int i =0; i<n;i++)
	{
		cin>>A[i];
		
	}
	for (int i=0;i<n;i++)
	{
		cin>>B[i];
	}
	for (int i=0;i<n;i++)
	{
		if (A[i]>B[i])
		{
			dem1++;
		}
		else if(A[i]<B[i])
		{
			dem2++;
		}
		}
	cout<<dem1<<" "<<dem2;
	return 0;
}
