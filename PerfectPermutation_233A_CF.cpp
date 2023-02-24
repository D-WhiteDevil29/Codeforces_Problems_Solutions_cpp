/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	memset(arr,0,sizeof(arr));
	for(int i=1;i<n+1;i++)
	{
		arr[i]=i;
	}
	if(n==1 || n%2!=0)
	{
		cout<<-1;
	}
	else
	{
		for(int i=1;i<n;i+=2)
		{
			swap(arr[i],arr[i+1]);
		}
		for(int i=1;i<n+1;i++)
	    {
		    cout<<arr[i]<<" ";
	    }
	}
	cout<<endl;
	return 0;
}