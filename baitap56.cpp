#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for (int i=1;i<=n;i++)
{
	cin>>A[i];
}
int max=A[1];
for (int i=2;i<=n;i++)
{
	if (max<A[i]) {
		max=A[i];
	}
}
long long int s=0;
for (int i=1;i<=n;i++)
{
	if(A[i]<max)
	{
		s=s+A[i];
	}
}
cout<<s<<'\n';
return 0;
}
