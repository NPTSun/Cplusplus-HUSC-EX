#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	double ans,w,sum,mul;
	cin>>n;
	sum=0;
	mul=1;
	while (n>0)
	{
		 w= n%10;
	sum=sum+n%10;
	mul=mul*w;
	n=n/10;
}
 ans=mul/sum;
cout<<setprecision(3)<<fixed<<ans<<'\n';
return 0;
}
