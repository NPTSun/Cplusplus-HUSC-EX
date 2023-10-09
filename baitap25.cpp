#include <bits/stdc++.h>
using namespace std;
int main () {
	double l,r,l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	l=max(l1,l2);
	r=min(r1,r2);
	if (l<=r) {
	cout<<l<<" "<<r<<endl;
	}
	else {
		cout<<-1<<endl;
	}
return 0;
}
