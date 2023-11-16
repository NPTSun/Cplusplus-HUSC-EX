#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	vector<double>A(n);
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	double s=0;
	for (int i=n;i>=n-t;i--)
	{
		s+=A[i];
	}
	cout<<fixed<<setprecision(2)<<s<<'\n';
}
