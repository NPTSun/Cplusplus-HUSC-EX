#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ans1,ans2,n,m,k;
	cin>>n>>m>>k;
if (n%k!=0)

{
ans1=n/k+1;
}
else {
	  ans1=n/k;
}
if (m%k!=0)
{
 ans2=m/k+1;
}
else {
	ans2=m/k;
}
cout<<ans1+ans2<<'\n';
	return 0;
}
