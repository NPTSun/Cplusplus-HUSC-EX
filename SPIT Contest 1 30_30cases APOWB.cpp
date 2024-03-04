#include <bits/stdc++.h>
using namespace std;
long long mu(long long a, long long b,long long n) {
    if (b == 0)
        return 1;
    long long temp = mu(a, b / 2,n);
    temp = (temp * temp) % n;
    if (b % 2 == 0)
        return temp;
    else
        return ((a % n) * temp) % n;
}
int main(){
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		long long a,b;
		cin>>a>>b;
		cout<<mu(a,b,998244353)<<'\n';
	}
}
