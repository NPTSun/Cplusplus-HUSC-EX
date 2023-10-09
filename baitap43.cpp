#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,sum;
	cin>>n;
	sum=0;
	
	for (i=1;i<n;i++)
	{
		if (n%i==0)
		{
			sum=sum+i;
		}
	}
	if (sum>n)
	{
		cout<<"YES"<<'\n';
	}
	else {
	cout<<"NO"<<'\n';
}
	return 0;
}
