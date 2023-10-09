#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n;
	cin>>s;
	cin>>n;
		int A[n];
	for (int i=1;i<=n;i++)
	{
	cin>>A[i];
}
for (int i=1;i<=n;i++)
{
	int j=1;
	while (j<=A[i])
	{
		cout<<s;
		j++;
	}
	cout<<endl;
}
	return 0;
}
