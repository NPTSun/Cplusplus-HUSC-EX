#include <bits/stdc++.h>
using namespace std;
long long khoangcach(int a,int b, int c, long x)
{	long long kc=0;
	int max=a+c;
	int dem=0;
	while (x>max){
		dem++;
		x-=max;
	}
	if (x<a){
		kc+=x*b;
	}
	else{dem++;
	}
		kc+=(a*b)*dem;
	return kc;
	}
int main(){
	int a,b,c,d,e,f,x;
	cin>>a>>b>>c>>d>>e>>f>>x;
	long alice=khoangcach(a,b,c,x),bob=khoangcach(d,e,f,x);
	if (alice>bob){
		cout<<"Alice "<<alice-bob;
	}
	else if (alice<bob){
		cout<<"Bob "<<bob-alice;
	}
	else{
		cout<<"Draw";
	}
}
