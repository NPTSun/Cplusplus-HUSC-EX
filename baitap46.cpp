#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int dem;
	dem=0;
	cin>>n;
	while (n>1)
	{
		if (n%2==0)
		{
		n=n/2;
		}
		else 
		{
			n=n*3+1;
		}
		dem++;
	}
	cout<<dem+1<<'\n';
	return 0;
	
}
