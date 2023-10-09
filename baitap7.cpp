#include <bits/stdc++.h>
using namespace std;
int main() {
float a,c,x,k;
cin>>x>>k;
c= sqrt(abs(x));
a=pow(c,4) + pow(k,3);
cout<<setprecision(2)<<fixed<<pow(log10(a),3)+pow(cos(x),5)<<endl;
	return 0;
}
