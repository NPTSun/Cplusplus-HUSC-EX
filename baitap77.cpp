#include <bits/stdc++.h>
using namespace std;
int lucas(long int n){

	if (n==0){
		return 2;}
		else if (n==1){
			return 1;}
			else{
				return lucas(n-1)+lucas(n-2);}
			}
int main()
{
	int n;
	cin>>n;
for (int i=0;i<=n;i++)
{
	cout<<lucas(i)<<" ";
}
}
