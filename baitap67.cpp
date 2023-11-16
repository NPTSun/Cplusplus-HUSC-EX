#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<double>A(n);
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
		if (A[i]<=10 && A[i]>=8.5)
		{
			cout<<"A ";
		}
		else if(A[i]>=8.0 && A[i]<8.5)
		{
			cout<<"B+ ";
		}
		else if (A[i]<8.0 && A[i]>=7.0)
		{
			cout<<"B ";
		}
		else if (A[i]<7.0 && A[i]>=6.5)
		
		{
			cout<<"C+ ";		}
			else if (A[i]<6.5 && A[i]>=5.5)
			{
				cout<<"C ";
			}
			else if (A[i]<5.5 && A[i]>=5.0)
			{
				cout<<"D+ ";
			}
			else
			{
				cout<<"D ";
			}
	}
return 0;	
	
}
