#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,x;
	cin>>n>>x;
	vector<int>A(n);
	for (int i=1;i<=n;i++)
{
	cin>>A[i];
			if (A[i]>x)
		{
			cout<<i<<'\n';
			return 0;
	}
	}
	cout<<n+1<<'\n';
	return 0;
}
