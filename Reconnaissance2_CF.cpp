/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],maxV=0,minV=INT_MAX,fst,fend,val;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		val = abs(arr[j+1]-arr[j]);
		if(val<minV)
		{
			minV = val;
			fst = j;
			fend = j+1;
		}
		if(j==n-1)
		{
			val = abs(arr[j]-arr[0]);
            if(val<minV)
			{
				minV = val;
				fst = j;
				fend = 0;
			}				
		}
	}
	cout<<(fend+1)<<" "<<(fst+1);
	cout<<endl;
	return 0;
}