#include <bits/stdc++.h>
using namespace std;
int main () {
 int n;
cin>>n;
if (n<0 && n%3==0 && n%2==0)
{
	cout<<"No"<<endl;
}
else if(n%2==0)
{ cout<<"Yes"<<endl;
}
else if (n%3==0 && n<0)
{cout<<"Yes"<<endl;
}
else
{cout<<"No"<<endl;
}
return 0;
}
