#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	int arr[1500];
	memset(arr,0,sizeof(arr));
	for(int i=1,j=0;j<1500,i<2000;i++)
	{
		
		int num,modd,dec;
		modd = i%3;
		dec = i%10;
		if(modd!=0 && dec!=3)
		{
			num = i;
			arr[j]=num;
			j++;
		}
	}
	while(test--)
	{
		int x;
		cin>>x;
		cout<<arr[x-1]<<endl;
	}
	return 0;
}