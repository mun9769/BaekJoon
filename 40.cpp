#include <cstdio>
#include <cstdlib>
using namespace std;
#define swap(type, x, y) do {type t = x; x = y; y = t; } while(0)


void quick(int *arr, int left, int right)
{
	int pl = left;
	int pr = right;
	int x = arr[(pl+pr) / 2];
	do {
		while(arr[pl] < x) pl++;
		while(x < arr[pr]) pr--;
		swap(int, arr[pl], arr[pr]);
		pl++;
		pr--;
	}while( pl < pr);
	if( left < pr ) quick(arr, left, pr);
	if( pl < right) quick(arr,pl, right);
}


int main()
{
	freopen("input.txt","rt", stdin);
	int n, m;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	quick(a, 0, n-1);
	scanf("%d", &m);
	int b[m];
	for(int i=0; i<m; i++)
		scanf("%d", &b[i]);
	quick(b,0,m-1);

	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
	printf("\n");

	int p1 = 0, p2 = 0, p3 = 0;
	int c[1000];
	while(p1 < n && p2 < m)
	{
		if(a[p1] < b[p2] ) p1++;
		else if (a[p1] > b[p2] ) p2++;
		else if (a[p1] == b[p2]) 
		{
			c[p3++] = a[p1];
			p1++;
			p2++;
		}
	}

	for(int i=0; i<p3; i++)
		printf("%d\n",c[i]);

	return 0;
}
