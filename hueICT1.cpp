#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n){   
   for (int i = 0; i < n - 1; i++)
      for (int j = n - 1; j > i; j--)
         if(a[j] < a[j-1])
             swap(a[j], a[j-1]);
}
int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		int A[6];
		for (int j=0;j<7;j++)
		{
			cin>>A[j];
		}
		BubbleSort(A,7);
		for (int c=2;c<6;c++)
		if (A[0]+A[1]+A[c]==A[6])
		{
			cout<<A[0]<<" "<<A[1]<<" "<<A[c];
			break;
		}
		cout<<'\n';
	}
	return 0;
}

