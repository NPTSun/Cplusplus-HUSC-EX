#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double A[n-1],s=0;
	int i;
	for (i=0;i<n;i++)
	{
		cin>>A[i];
		s+=A[i];
	}
	sort(A, A+n);
	cout<<fixed<<setprecision(6);
	cout<<s/n<<'\n';
	if (n%2==1)
	{
		cout<<A[(n-1)/2];
	}
	else
	{
		cout<<(A[n/2]+A[(n/2)-1])/2;
	}
}
