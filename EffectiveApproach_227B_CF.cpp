/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n1,n2,vasya=0,petya=0;
	cin>>n1;
	vector<long long int> arr1(n1);
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	unordered_map<long long int,long long int> ump1,ump2;
	for(int i=0;i<n1;i++)
	{
		ump1.insert(make_pair(arr1[i],i));
	}
	cin>>n2;
	long long int arr2[n2];
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	for(auto i:arr2)
	{
		auto res = ump1.find(i);
		vasya += res->second+1;
	}
	reverse(arr1.begin(),arr1.end());
	for(int i=0;i<n1;i++)
	{
		ump2.insert(make_pair(arr1[i],i));
	}
	for(auto i:arr2)
	{
		auto res1 = ump2.find(i);
		petya += res1->second+1;
	}
	cout<<vasya<<" "<<petya;
	cout<<endl;
	return 0;
}