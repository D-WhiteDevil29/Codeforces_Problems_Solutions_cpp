/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    long long int dec,num;
	    string s;
		cin>>s;
	    long long int count1 = 0, count0 = 0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				count1++;
			}
			else
			{
				count0++;
			}
		}
	    if(count0==1 || count1==1)
	    {
	        cout<<"Yes";
	    }
	    else
	    {
	        cout<<"No";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
