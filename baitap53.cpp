#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>> n;
int A[n];
for(int i=1;i<=n;i++)
{
	cin>>A[i];
}
int dem=0;
for (int i=1;i<=n;i++)
{
	int ans=sqrt(A[i]);
	if (ans*ans==A[i])
	{
		dem++;
	}
}
cout<<dem;
return 0;
	
}
