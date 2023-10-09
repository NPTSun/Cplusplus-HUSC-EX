#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n1,s,n;
	cin>>n;
	n1=n;
	s=0;
while (n>0)
{
	s=s+n%10;
	n=n/10;
}
if (n1%s==0)
{
	cout<<"Yes"<<'\n';
}
else 
{
	cout<<"No"<<'\n';
}
return 0;	
}
