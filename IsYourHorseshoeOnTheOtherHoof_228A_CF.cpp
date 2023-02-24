/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int> S;
	for(int i=0;i<4;i++)
	{
		int num;
		cin>>num;
		S.insert(num);
	}
	int size = S.size();
	cout<<4-size;
	cout<<endl;
	return 0;
}