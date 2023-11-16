#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0,l=0;
	cin>>n;
	int A[n];
	for (int i=0;i<n;i++)
	{
			cin >>A[i];
		if (A[i]%2==0)
		{
			c++;
		}
		else
		{
			l++;
		}
	}
vector<int>chan(c);
vector<int>le(l);
	c=0;l=0;
		for (int i=0;i<n;i++)
	{
		if (A[i]%2==0)
		{
			chan[c]=A[i];
			c++;
		}
		 else if (A[i]%2!=0)
	{
		le[l]=A[i];
			l++;
		}
	}
	sort(chan.begin(),chan.end());
	sort(le.begin(),le.end());
	for (int i=0;i<c;i++)
	{
		cout<<chan[i]<<" ";
	}
	for (int i=0;i<l;i++)
	{
		cout<<le[i]<<" ";
	}
}
