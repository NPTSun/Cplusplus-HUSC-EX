#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> m;
    
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        m[x]++;
    }
    
    for(auto & i : m){
        if(i.second % 2 != 0){
            cout << i.first;
            exit(0);
        }
    }
return 0;
}
