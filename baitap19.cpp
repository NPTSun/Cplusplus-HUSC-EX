#include <bits/stdc++.h>
using namespace std;
double a,b,c;
int main()
{
	cout<<fixed<<setprecision(10);
	cin>>a>>b>>c;
	double t=0.000000001;
	if ((abs(a-b)<t)&&(abs(b-c)<t)) cout<<"Tam giac deu";
	else if ((abs(a-b)<t)||(abs(c-b)<t)||(abs(a-c)<t)) cout<<"Tam giac can";
	else cout<<"Tam giac thuong";
	return 0;
}
