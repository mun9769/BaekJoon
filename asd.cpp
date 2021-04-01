#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int arr[7] = {6,4,3,7,1,9,8};
	
	//my sorting method
	//제일 작은수(=맨앞자리)가 고정된다.
	//이웃하지 않은 수끼리 자리교환이 이루어진다.
	//O(n(n-1)/2); (cuz (n-1) + (n-2) + ... + 1);
//	for(int i=0; i<sizeof(arr)/sizeof(int) -1; i++)
//	{
//		for(int j=i+1; j<sizeof(arr)/sizeof(int) ; j++)
//		{
//			if(arr[i] > arr[j]) 
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//		for(int z=0; z<7; z++)
//			printf("%2d", arr[z]);
//		printf("\n");
//	}

	//bubble sorting
	//제일 작은수(=맨앞자리)가 고정된다.
	//이웃하는 수끼리 대소비교를 통해 자리교환이 이루어진다.
	//O(n(n-1)/2); (cuz (n-1) + (n-2) + ... + 1);
	for(int i=0;i < sizeof(arr)/sizeof(int)-1; i++){ 
		int cnt = 0;
		for(int j=sizeof(arr)/sizeof(int)-1; j>i; j--)
		{
			if(arr[j-1] > arr[j]) 
			{
				int tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
				cnt++;
			}
		}
		if(cnt == 0) break;
		for(int z=0; z<7; z++)
			printf("%2d",arr[z]);
		printf("\n");
	}
	

	//bubble sorting(2) ??
	//제일 큰수(=맨뒷자리)가 고정되게끔 했다
	//이웃하는 수끼리 교환되도록 했다.
//	for(int i=sizeof(arr)/sizeof(int)-1; i>0; i--)
//	{
//		int cnt =0;
//		for(int j=0; j<i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				cnt++;
//			}
//		}
//		if (cnt == 0) break;
//		for(int z=0; z<7; z++)
//			printf("%2d", arr[z]);
//		printf("\n");
//	}


	return 0;
}
