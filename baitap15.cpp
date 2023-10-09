#include <bits/stdc++.h>
using namespace std;
int main () {
	double delta,a,b,c;
	cin>>a>>b>>c;
	delta=(b*b)-(4*a*c);
	if (delta>0) {
	cout<<setprecision(4)<<fixed<<(-b+sqrt(delta))/(2*a)<<endl<<(-b-sqrt(delta))/(2*a)<<endl;
	}
else if (delta<0) {
cout<<"No Solution"<<endl;
}
else {
cout<<setprecision(4)<<fixed<<-b/(2*a)<<endl;;
}	
return 0;
}
