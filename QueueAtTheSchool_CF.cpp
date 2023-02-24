/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

void fun(char arr[],int n,char a2[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='B' && arr[i+1]=='G')
        {
            a2[i]='G';
            a2[i+1]='B';
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    char arr[n],a2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a2[i]=arr[i];
    }
    for(int i=0;i<k;i++)
    {
        fun(arr,n,a2);
        copy(a2,a2+n,arr);
    }
    for(auto i:a2)
    {
        cout<<i;
    }
    cout<<endl;
    return 0;
}
