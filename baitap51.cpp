#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int h,a,b,dem=0,sum=0;
	cin>>h>>a>>b;
	if (a<=b && a<h)
	{
		cout<<-1<<'\n';
		return 0;
	}
	else{
	  while (sum<h)
{
	sum=sum+a;dem++;
	if (sum>=h) {
		break;
	}
	sum=sum-b;
		}
				
	}
	cout<<dem<<'\n';
		return 0;
}
