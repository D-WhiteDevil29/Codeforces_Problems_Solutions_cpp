/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	float num;
    	cin>>num;
    	if(num<1 || num>179)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			float Mult_val = 360 / (180 - num);
            if (Mult_val == (int)Mult_val)
            {
				cout << "YES";
			}
            else
            {
				cout << "NO";
			}
			cout<<endl;
		}
	}
	cout<<endl;
	return 0;
}