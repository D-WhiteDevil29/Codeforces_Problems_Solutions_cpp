/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int maxV=INT_MIN,minV=INT_MAX,val1,val2,dist = 0,pos;
	
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(x>maxV)
		{
			val1 = i;
			maxV = x;
		}
		if(x<=minV)
		{
			val2 = i;
			minV = x;
		}
	}
	if(val1>val2)
	{
		dist = (val1-1)+(n-val2)-1;
	}
	else
	{
		dist = (val1-1)+(n-val2);
	}
	cout<<dist;
	cout<<endl;
	return 0;
}