/* Ganapati Bappa Morya */
/* Codeforces */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		sum += num;
	}
	
	double ans = (double)sum/n;
	cout<<setprecision(14)<<ans;
	cout<<endl;
	return 0;
}