#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	int dem=0;
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
		if (A[i]==4 || A[i]==7 || A[i]==16 || A[i]==28 || A[i]==44 || A[i]==47 || A[i]==49 || A[i]==64 || A[i]==74 || A[i]==77)
		{
			dem++;
		}
	}
	cout<<dem;
	return 0;
}
