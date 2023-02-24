/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			k = k/__gcd(k,arr[i]);
			cout<<k<<endl;
		}
		if(k==1)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}