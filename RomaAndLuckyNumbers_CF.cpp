/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;
int checker(int num,int cnt)
{
	int digit,count=0;
	bool flag = false,ans;
	while(num>0)
	{
	    digit = num % 10;
	    if(digit==4 || digit==7)
	    {
		   flag = true;
		   count++;
	    }
	    else
	    {
	       flag = true;	
	    }
	    num = num /10;
	}
	ans = (flag==true && count<=cnt) ? true : false;
	return ans;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n],count;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(checker(arr[i],k))
		{
			count++;
		}
	}
    cout<<count;
	cout<<endl;
	return 0;
}