#include <bits/stdc++.h>
using namespace std;
bool hoanhao(int n)
{
		int sum=0;
	for (int i=1;i<=n/2;i++)
	{
		if (n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n){
	
		return true;
}
return false;
}
int main(){
	int n ; 
	cin>>n;
	if (hoanhao(n)==true)
	{
		cout<<"Yes"<<'\n';
	}
	else {
		cout<<"No";
		exit(0);
	}
	int sum=0;
			for (int i=1;i<=n/2;i++)
	{
		if (n%i==0)
		{
			sum+=i;
		cout<<i<<" ";
		}}
	return 0;
	}
