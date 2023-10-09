#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	int dem=0;
	cin>>n;
	    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    cout<<dem<<'\n';
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
