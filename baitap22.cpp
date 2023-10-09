#include <bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
double x=n/100;
if (n%2!=0||(n>0 && x>=1 && x<10)) 
{
	cout<<"YES"<<endl;
}
else
{
cout<<"NO"<<endl;
}
return 0;
}
