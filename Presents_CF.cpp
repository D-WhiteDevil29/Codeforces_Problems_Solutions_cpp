/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		arr[m-1] = i+1;
	}
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	return 0;
}