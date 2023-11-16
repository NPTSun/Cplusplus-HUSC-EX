#include <bits/stdc++.h>
using namespace std;
bool nhiphan(int n)
{
	string x;
	if (n==0)
	{
		return false;
	}
	else {
	while (n>0)
	{
		if (n%2==0)
		{
		x=x+"0";	
		}
		else {
			x=x+"1";
		}
		n=n/2;
	}
	string y=x;
	reverse(x.begin(),x.end());
	if (x==y)
	{
	return true;}
	else {
		return false;
	}}
}
int main()
{
	int n;
	cin>>n;
	if (nhiphan(n)==true)
	{
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}
