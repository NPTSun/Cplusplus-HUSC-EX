#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,k;
	cin>>a>>b>>k;
			if (a<k)
			{
				k=k-a;
				a=0;
				b=b-k;
				}
			else if (a>=k)
			{
				a=a-k;
				cout<<a<<" "<<b;
				exit(0);
			 }
	if ((b<0) || (a==0 && b==0)) 
	{
		cout<<0<<" "<<0;
	}
	else if (a==0 && b!=0)
	{
		cout<<0<<" "<<b;
	}
	else if (a!=0 && b==0)
	{
		cout<<a<<" "<<b;
	}
}
