#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,dem=0	;
	cin>>n;
	int A[n];
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	while (true)
	{
for (int i=0;i<n;i++)
{
	if (A[i]%2==1)
	{
		cout<<dem<<'\n';
		exit(0);
	}
			else {
		A[i]=A[i]/2;
	}
	}
	dem++;}


}
