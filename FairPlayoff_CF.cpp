#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a1,a2,a3,a4,P1,P2;
		cin>>a1>>a2>>a3>>a4;
		P1 = max(a1,a2);
		P2 = max(a3,a4);
		if(P1<min(a3,a4) || P2<min(a1,a2))
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
		cout<<endl;
	}
	return 0;
}