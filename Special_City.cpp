/* Problem Statement:- 
There are N cities and two newly built cities X and Y among them (1 <= X, Y<= N)
There exists a road between cities:
$ i and i+1 for each 1 <= i <= N
$ X and Y

The task is to tell for each k from 1 to N, the number of pairs of cities (i,j),
i<j such that the shortest path between city i and j is k.

Test cases:
 1]
N = 3, X = 1, Y = 3
pair of cities having shortest distance 1: (1,2) (1,3) (2,3) 
pair of cities having shortest distance 2: No pair
pair of cities having shortest distance 3: No pair

2] N = 5, X = 2, Y = 3
4 , 3 , 2 , 1 , 0

3] N = 5, X = 2, Y = 4
5 , 4 , 1 , 0 , 0
*/


#include <bits/stdc++.h>
using namespace std;

void shortestPath(int N,int X,int Y)
{
	int arr[N];
	int arr2[N];
	memset(arr,0,sizeof(arr));
	memset(arr2,0,sizeof(arr2));

	int dist=0;
	for(int i=0;i<N;i++)
	{
		arr[i] = i+1;
	}
	for(int i=0;i< N;i++)
	{
		int dist = 0;
		for(int j=1;j<N;j++)
		{
			if(arr[i] == X && arr[j] == Y )
			{
				
				arr2[0]++;
 			}
 			else
 			{
 				if(arr[i]<= X && arr[j]>= Y)
 				{
 					dist = arr[j] - arr[i] - (Y-X) + 1;
 					arr2[dist-1]++;
 				}
 				else
 				{
 					dist = arr[j] - arr[i];
 				    arr2[dist-1]++;
 				}
 			}
		}
	}

	for(int i=0;i<N;i++)
	{
		cout<<arr2[i]<<endl;
	}
}

int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	shortestPath(n,x,y);
}