#include <bits/stdc++.h>
using namespace std;
int main() {
double x;
cin>>x;
if (x>0) {
	cout<<setprecision(6)<<fixed<<x*x+sqrt(x)+1<<endl;
}
else if (x==-3){cout<<"Div by zero"<<endl;
}
else
{
	cout<<setprecision(6)<<fixed<<(x*x*x+2*x+1)/(x+3)<<endl;
}
	return 0;
}
