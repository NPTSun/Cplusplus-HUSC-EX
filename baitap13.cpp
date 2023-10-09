#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
if (a==0) {
	if (b==0) {
		cout<<"Many Solutions"<<endl;
	}
	else
	{cout<<"No Solution"<<endl;
	}
}
else {
	cout<<setprecision(2)<<fixed<<-b/(double)a<<endl;
}
	return 0;
}
