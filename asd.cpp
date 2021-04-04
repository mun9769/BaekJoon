#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	freopen("input.txt","rt",stdin);
	int a,b;
	scanf("%d", &a);
	int arr1[a+1]; 
	for(int i=0; i<a; i++)
		scanf("%d", &arr1[i]);
	arr1[a] = 2147000000;
	scanf("%d", &b);
	int arr2[b+1]={2147000000,};
	for(int i=0; i<b; i++)
		scanf("%d", &arr2[i]);
	arr2[b] = 2147000000;
	int result[a+b] = {0,};

	int x=0, y=0;
	for(int i=0; i<a+b; i++)
	{
		if(arr1[x] < arr2[y]) 
			result[i] = arr1[x++];
		else if (arr1[x] > arr2[y]){
			result[i] = arr2[y++];
		}
		else if (arr1[x] == arr2[y]){
			result[i++] = arr1[x++];
			result[i] = arr2[y++];
		}
		for(int i=0; i<a+b; i++)
			printf("%2d", result[i]);
		printf("\n");
	}
	return 0;
}
