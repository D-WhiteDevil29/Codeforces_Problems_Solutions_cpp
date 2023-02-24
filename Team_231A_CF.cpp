/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,res=0,cnt=0;
    while(n--)
    {
    	cnt=0;
    	for(int i=0;i<3;i++)
    	{
    		cin>>a;
    		if(a==1){cnt++;}
		}
		if(cnt>1){res++;}
	}
	cout<<res;
	cout<<endl;
	return 0;
}