#include <bits/stdc++.h>
using namespace std;
int main()
{
	string o,e,z;
	cin>>o>>e;
	int i=0;
	int maxo=o.length();
	int maxe=e.length();
	int max;
	if (maxo>maxe)
	{
		max=maxo;
	}
	else
	{
		max=maxe;
	}
	while (i<max)
	{
		if (i>=o.length())
		{
			z=z+e[i];
		}
		else if (i>=e.length())
		{
			z=z+o[i];
		}
		else
		{
			z=z+o[i]+e[i];
		}
		i++;
	}
	cout<<z;
}
