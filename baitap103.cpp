#include <bits/stdc++.h>
using namespace std;
int kiemtra(string st)
{
	int dem=0;
	for (int i=0;i<st.size();i++)
	{
		st[i]= tolower(st[i]);
		if (st[i]=='a'|| st[i]=='o' || st[i]=='u' || st[i]=='e' || st[i]=='i' || st[i]=='y')
		{
			dem++;
		}
	}
	return dem;
}
int main()
{
string st;
while (getline(cin,st))
{
	cout<<kiemtra(st)<<'\n';
}
}
