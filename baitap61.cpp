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
	double s=0;
	for (int i=1;i<=n;i++)
	{
		s+=A[i];
	}
	cout<<fixed<<setprecision(2)<<s/n<<'\n';
	return 0;
}
