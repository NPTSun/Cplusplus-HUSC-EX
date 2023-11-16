#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    vector<vector<int>> a(m, vector<int>(n));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    vector<pair<int, int>> pairs;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int mi = a[i][0];
            int ma = a[0][j];

            for(int k = 1; k < n; k++){
                if(a[i][k] < mi)
                mi = a[i][k];
            }

            for(int k = 1; k < m; k++){
                if(a[k][j] > ma)
                ma = a[k][j];
            }

            if(a[i][j] == mi and a[i][j] == ma)
                pairs.push_back(make_pair(i, j));
        }
    }

    if(!pairs.empty()){
        cout << "Cac phan tu yen ngua la:" << '\n';
        for( auto& i : pairs){
            cout << "(" << i.first+1 << "," << i.second+1  << ")" << ";" << " "; 
        }
    }
    else {
        cout << "Khong co phan tu yen ngua" << '\n';
    }
}
