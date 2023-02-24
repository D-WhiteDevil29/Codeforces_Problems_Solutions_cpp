// /* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int k,l,m,n,d,cnt=0;
	cin>>k>>l>>m>>n>>d;
	for(int i=1;i<d+1;i++)
	{
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
		{
			cnt++;
		}
	}
	cout<<cnt;
	cout<<endl;
	return 0;
}