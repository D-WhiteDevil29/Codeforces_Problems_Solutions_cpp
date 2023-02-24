#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	bool flag = true;
	cin>>n;
	int arr[n][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	long long int sum;
	for(int i=0;i<3;i++)
	{
		sum = 0;
		for(int j=0;j<n;j++)
		{
			sum = arr[j][i] + sum;
			
		}
		if(sum == 0)
			{
				flag = true;
			}
			else
			{
				flag = false;
				break;
			}
	}
	if(flag)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	cout<<endl;
}