#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,n,x,y;
	cin>>m>>n;
	y=(n-m*2)/2;
	x=m-y;
	if (x>0 && y>0)
	{
	cout<<"Ga = "<<x<<'\n';
	cout<<"Cho = "<<y<<'\n';
	return 0;
}
else {
	cout<<-1<<'\n';
}
}
