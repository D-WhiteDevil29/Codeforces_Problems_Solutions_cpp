/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0,sum=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	sort(arr,arr+n);
	for(auto i:arr)
	{
		if(cnt<m && i<=0)
		{
			sum += i;
			cnt++;
		}
	}
	cout<<abs(sum);
	cout<<endl;
	return 0;
}