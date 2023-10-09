#include <bits/stdc++.h>
using namespace std;
int main() {
long long int x,a,b,c,d;
cin>>a>>b>>c>>d;
a=a%100;
b=b%100;
c=c%100;
d=d%100;
x=a*b*c*d;
if (x%100<10)
{
	cout<<"0"<<x%100<<'\n';
}
else{
cout<<x%100<<'\n';

}	return 0;
}
