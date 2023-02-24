#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	
	while(test--)
	{
		int n,arr[26],flag = 1;
		cin>>n;
		memset(arr,0,sizeof(arr));
		string s;
		cin>>s;
		if(n<=2)
		{
			flag = 1;
		}
		else
		{
			for(int i=0;i<n;i++)
		    {
			   int var = int(s[i]) - 64;
			   if(arr[var-1] == 0)
			   {
			        arr[var-1] = 1;
				    flag = 1;
			   }
			   else
			   {
			       if(s[i] == s[i-1])
			       {
			            arr[var-1] = 1;
				        flag = 1;
			       }
			       else
			       {
			           flag = 0;
				       break;
			       }
			   }
		    }
		}
		
		string ans = (flag == 0) ? "NO" : "YES";
		cout<<ans<<endl;	
	}
	return 0;
}