#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long int num,val,c1,c2,sub,var;
		cin>>num;
		val =int(num/3);

		sub = num - val;
		if(sub%2 == 0)
		{
			c1 = val;
			c2 =int(sub/2);
		}
		else 
		{
			var = int(sub/2);
			if(var == val)
			{
				c1 = sub - var;
				c2 = var;
			}
			
		}
		cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}