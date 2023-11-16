#include <bits/stdc++.h>
using namespace std;
int daonguoc(int n)
{
	int s=0;
	while (n>0)
	{
		s=s*10+n%10;
		n/=10;
	}
	return s;
}
bool nguyento(int n)
{
	if (n==1 || n==0)
	{
		return false;
	}
	else if (n>2)
	{
			for (int i=2;i<=sqrt(float(n));i++)
			{
				if (n%i==0)
				{
					return false;
				}
			}
		}
		return true;
	}
int main()
{
	int n;
	cin>>n;
	int A[n];
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
		if (nguyento(daonguoc(A[i]))==true)
		{
			cout<<"Yes"<<'\n';
		}
		else
		{
			cout<<"No"<<'\n';
		}
	}
}
