/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
	bool flag = true;
	if(num == 0 || num == 1)
	{
		flag = false;
	}
	for (int i = 2; i <= num / 2; i++) 
	{
      if (num % i == 0) 
	  {
         flag = false;
         break;
      }
    }
	return flag;
}
int main()
{
	int m,n,ans;
	cin>>m>>n;
	for(int i=m+1;i<51;i++)
	{
		if(isPrime(i)==true)
		{
			ans = i;
			break;
		}
	}
	string res = (ans==n) ? "YES" : "NO";
	cout<<res;
	cout<<endl;
	return 0;
}