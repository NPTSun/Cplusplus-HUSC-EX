#include <bits/stdc++.h>
using namespace std;
int main() {
	double x;
	cin>>x;
	double result = sin(x) + sqrt(log(3*x)/log(4)) + ceil(3*exp(x));
	cout << setprecision(6) << fixed << result;
	return 0;
}
