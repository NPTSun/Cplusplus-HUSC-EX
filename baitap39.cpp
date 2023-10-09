#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int dem=0;
	if (n<=1)
	{
		cout<<"No"<<'\n';
	}
	else {
	
	for(int i=2;i<=n;i++)
	{
		if (n%i==0)
		{
			dem++;
		}
	}
	 if (dem==1)
	{
		cout<<"Yes"<<'\n';
	}
	else {
		cout<<"No"<<'\n';
	}
}
	return 0;
}
