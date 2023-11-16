#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,x,y;
    cin >> n>>x>>y;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < x; i++) {
        cout << A[i] << " ";
    }
    for (int i=(n-y); i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
