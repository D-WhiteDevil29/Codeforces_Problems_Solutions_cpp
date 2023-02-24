#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		long long int arr[n],sum = 0,avg = 0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum += arr[i];
		}
		if(sum == n)
		{
			cout<<0;
		}
		else if(sum < n)
		{
			cout<<1;
		}
		else if(sum > n)
		{
			cout<<sum - n;
		}
		cout<<endl;
	}
	return 0;
}