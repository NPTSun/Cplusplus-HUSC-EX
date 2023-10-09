#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long int s=0;
	cin>>n;
	while (n!=-1)
	{
		s=s+n;
		cin>>n;
	}
		cout<<s;
	return 0;
}
