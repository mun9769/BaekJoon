#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int arr[7] = {6,4,3,7,1,9,8};
	
	//my sorting method
	//���� ������(=�Ǿ��ڸ�)�� �����ȴ�.
	//�̿����� ���� ������ �ڸ���ȯ�� �̷������.
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
	//���� ������(=�Ǿ��ڸ�)�� �����ȴ�.
	//�̿��ϴ� ������ ��Һ񱳸� ���� �ڸ���ȯ�� �̷������.
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
	//���� ū��(=�ǵ��ڸ�)�� �����ǰԲ� �ߴ�
	//�̿��ϴ� ������ ��ȯ�ǵ��� �ߴ�.
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
