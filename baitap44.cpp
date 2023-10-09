#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
double v;
string x,y;
	cin>>n;
	int dem=0;
	while (n>0)
	{dem++;
	 if (n%16==0)
	{
		x=x+"0";
		n=n/16;
	}
		else {
		v=n%16;
		n=n/16;
		if ( v==10)
		{
			x=x+ "A";
		}
		else if (v==11)
		{
			x=x+"B";
		}
		else if (v==12)
		{
			x=x+"C";
		}
		else if (v==13)
		{
		
		x=x+"D";
	}
	else if (v==14)
	{
		x=x+"E";
	}
	else if (v==15)
	{x=x+"F";
	}
	else if (v==9){
		x=x+"9";
	}
	else if (v==8)
	{
		x=x+"8";
	}
	else if (v==7)
	{
		x=x+"7";
	}
	else if (v==6)
	{
		x=x+"6";
	}
	else if (v==5)
	{
		x=x+"5";
	}
	else if (v==4)
	{x=x+"4";}
	else if (v==3)
	{x=x+"3";
	}
	else if (v==2)
	{x=x+"2";
	}
	else if (v==1)
	{
		x=x+"1";
	}}
}
reverse(x.begin(), x.end());
	cout<<x<<'\n';
	return 0;
}
