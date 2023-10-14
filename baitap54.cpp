#include <bits/stdc++.h>
using namespace std;
int main()
{
	int am=0,duong=0,chan=0,le=0,n;
	cin>>n;
	int A[n];
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(A[i]<0 && A[i]%2!=0)
		{ am++;
			le++;
		}
		else if(A[i]<0 && A[i]%2==0)
		{
			am++;
			chan++;
		}
		else if(A[i]>0 && A[i]%2!=0)
		{
			duong++;
			le++;
		}
		else if (A[i]>0 && A[i]%2==0)
		{
			duong++;
			chan++;
		}
		else if (A[i]==0)
		{
			chan++;
		}
	}
	cout<<am<<'\n';
	cout<<duong<<'\n';
	cout<<chan<<'\n';
	cout<<le<<'\n';
	return 0;
}
