#include <bits/stdc++.h>
using namespace std;
double factorial(long n){
	if (n == 1){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}
int main(){
	double x;
	cin >> x;
	double s = 1;
	int i = 1;
	double tmp = pow(x, i) / factorial(i);
	while (tmp > pow(10, -9)){
		s += tmp;
		i++;
		tmp = pow(x, i) / factorial(i);
	} 
	cout << fixed << setprecision(4) << s;
	return 0;
}
