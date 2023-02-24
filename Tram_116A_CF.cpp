/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,Insiders=0,maxP=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		Insiders = Insiders + b - a;
		maxP = max(maxP,Insiders);
	}
	cout<<maxP;
	cout<<endl;
	return 0;
}