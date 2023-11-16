#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n){   
   for (int i = 0; i < n - 1; i++)
      for (int j = n - 1; j > i; j--)
         if(a[j] < a[j-1])
             swap(a[j], a[j-1]);
}
bool dem(int A[],int B[],int n)
{
	for (int i=0;i<n;i++)
	{
		if (A[i]>B[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin>> n;
	for (int i=0;i<n;i++)
	{
		int x;
		cin>>x;
int A[x],B[x];
		for (int j=0;j<x;j++)
		{
		cin>>A[j];}
		for (int j=0;j<x;j++)
		{
		cin>>B[j];}
		BubbleSort(A,x);
		BubbleSort(B,x);
		if (dem(A,B,x)==false)
		{
			cout<<"No"<<'\n';
		}
		else {
			cout<<"Yes"<<'\n';
		}
		}
}
