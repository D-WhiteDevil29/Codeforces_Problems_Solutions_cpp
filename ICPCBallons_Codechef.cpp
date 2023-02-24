/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n],count=7,fcount=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            fcount++;
            if(arr[i]<=7)
            {
                count--;
            }
            if(count==0)
            {
               break;
            }
        }
        cout<<fcount<<endl;
        
    }
}