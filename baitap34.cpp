#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,a,sum=0,x;
     cin >> n;

    for(x=n;n!=0;n=n/10){
         a=n%10;
         sum=sum*10+a;
    }
    if(x==sum)
         cout <<"Yes";
    else
         cout <<"No";

    return 0;
}
