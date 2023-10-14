#include <bits/stdc++.h>

using namespace std;

int main(){
	

	
	float n,m,p; cin >> n  >> m >> p;
	int cnt = 0;
	while(n < p){
		float lai = (n/100)*m;
		n += lai;
		cnt++;
	}
	cout << cnt;

	return 0;
}
