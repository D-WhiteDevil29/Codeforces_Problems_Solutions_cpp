/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int b[5][5];
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cin>>a[i][j];
            b[i][j] = 1;
        }
    }
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            if(a[i][j]%2 != 0)
            {
                b[i-1][j] = 1 - b[i-1][j];
                b[i+1][j] = 1 - b[i+1][j];
                b[i][j-1] = 1- b[i][j-1];
                b[i][j+1] = 1- b[i][j+1];
                b[i][j]   = 1- b[i][j];
            }
        }
    }
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }

}
