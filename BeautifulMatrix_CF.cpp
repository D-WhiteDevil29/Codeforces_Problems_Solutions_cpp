/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[5][5];
	int idx,idy;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j] == 1)
			{
				idx = i+1;
				idy = j+1;
			}
		}
	}
	cout<<(abs(3-idx)+abs(3-idy));
	cout<<endl;
	return 0;
}