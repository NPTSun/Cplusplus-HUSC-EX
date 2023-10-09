#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=200;i++){
	for(int j=1;j<=200;j++){
	double sum=1.0/i +1.0/j;
	if (abs(sum-1.0/n)==0)
	{
		cout<<i<<" "<<j<<'\n';
	}}}
	return 0;
}
