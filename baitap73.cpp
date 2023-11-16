#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>A(n);
	for (int i =0;i<n;i++)
	{
		cin>>A[i];
	}
	for (int i=0;i<n;i++)
	{
		if (A[i]!=A[n-i-1])
		{
			cout<<"No"<<'\n';
			return 0;
		}
	}
	cout<<"Yes"<<'\n';
}
