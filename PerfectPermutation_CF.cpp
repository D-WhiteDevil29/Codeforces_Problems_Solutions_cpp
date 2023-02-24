/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	if(n%2 != 0)
	{
		cout<< -1;
	}
	else
	{
		for(int i=0;i<n;i++)
	    {
		   arr[i]=i+1;
	    }
	    for(int i=0;i<n-1;i=i+2)
	    {
		   swap(arr[i],arr[i+1]);
	    }
	    for(auto i: arr)
	    {
		   cout<<i<<" ";
	    }
    } 
	cout<<endl;
	return 0;
}