#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>A(n);
	vector<int>B(n);
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for (int i=0;i<n;i++)
	{
		cin>>B[i];
	}
	int sum=0;
	for (int i=0;i<n;i++)
	{
		int mul=A[i]*B[i];
		sum+=mul;
	}
	if (sum==0)
	{
		cout<<"Yes"<<'\n';
	}
	else
	{
		cout<<"No"<<'\n';
	}
}
