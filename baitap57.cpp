#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if ((A[i]%2==0) || (A[i]<0 && A[i]%3==0) ||(A[i]%2==0 && A[i]<0 && A[i]%3==0))
		{
			dem++;
		}
	}
		cout<<dem<<'\n';
		return 0;
}
