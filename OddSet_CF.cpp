#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long int num,count = 0;
		cin>>num;
		long long int size = 2*num;
		long long int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
			if(arr[i]%2 == 0)
			{
				count++;
			}
			else
			{
				count--;
			}
		}
		string ans = (count == 0) ? "Yes" : "No";
		cout<<ans<<endl;
	}
}