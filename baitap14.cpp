#include <bits/stdc++.h>
using namespace std;
int main() {
	double p,a,b,c;
	cin>>a>>b>>c;
	if (a+b>c && a+c>b && b+c>a) {
		p=(a+b+c)/2;
		cout<<setprecision(4)<<fixed<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
	}
	else {
		cout<<"No Solution"<<endl;
	}
	return 0;
}
