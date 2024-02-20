#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	long long a[m][n];
	for(int i = 0; i < m; i++){
		long s = 0;
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			s += a[i][j];
		}
		cout << s << " ";
	}
}

