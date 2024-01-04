#include <bits/stdc++.h>
using namespace std;
int kiemtra(int A[], int n)
{
	int somax=A[0];
	int i=0,dem=0;
while (i<n)
	{
		if (A[i-1]==A[i])
		{
			i++;
		}
		int temp=0;
		for (int j=i;j<n;j++)
		{
			if (A[i]==A[j])
			{
				temp++;
			}
		}
		if (temp>dem)
		{
			dem=temp;
			somax=A[i];
		}
		i++;
	}
	return somax;
}
int main()
{
	int n;
	cin>>n;
	int A[n];
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<kiemtra(A,n);
}
