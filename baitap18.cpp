#include <bits/stdc++.h>
using namespace std;
int main () {
long long a,b,c;
cin>>a>>b>>c;
if (a==b && a==c) {
	cout<<"Tam giac deu"<<endl;}
	
else if ((a==b && a!=c) || (b==c && b!=a) || (a==c && c!=b)) {
		cout<<"Tam giac can"<<endl;
}
else {
cout<<"Tam giac thuong"<<endl;
}
return 0;
}
