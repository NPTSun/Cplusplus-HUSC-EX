#include <bits/stdc++.h>

using namespace std;

vector<long long> a(81, 0);

long long f(int n){
    if(n == 0)
        return a[n] = 2;
    if( n == 1)
        return a[n] = 1;
    if(a[n] != 0)
        return a[n];
    else
        return a[n] = f(n-1) + f(n-2);
}

int main() {
    int n; cin >> n;
    for(int i = 0; i <= n; i++){
        cout << f(i) << " ";
    }
    return 0;
}
