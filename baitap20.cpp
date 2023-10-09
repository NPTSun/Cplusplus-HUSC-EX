#include <bits/stdc++.h>
using namespace std;
int main () {
int a,b,c,x,y;
cin>>a>>b>>c>>x>>y;
if ((a<=x && b<=y) || (b<=x && c<=y) || (a<=x && c<=y) || (a<=y && c<=x))
{cout<<"Yes"<<endl;
}
else {cout<<"No"<<endl;
}
return 0;
}
