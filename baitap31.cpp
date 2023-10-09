#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		if (a == b && b == c && c == d){
			cout << "Yes" << endl;
		}else{
			int max = a;
			if (b > max) max = b;
			if (c > max) max = c;
			if (d > max) max = d;
			if (max != a){
				a += e;
			} else if (max != b){
				b += e;
			} else if (max != c){
				c += e;
			} else if (max != d){
				d += e;
			}
			if (a == b && b == c && c == d){
				cout << "Yes" << endl;
			} else cout << "No" << endl;
		}
	}
	return 0;
}
