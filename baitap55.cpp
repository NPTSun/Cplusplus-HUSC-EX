#include <bits/stdc++.h>
using namespace std;
int main()
{
	 int n;
	cin>>n;
	 int A[n];
	long long int s=0;
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
		s+=A[i];
	}
	cout<<s;
	return 0;
}
