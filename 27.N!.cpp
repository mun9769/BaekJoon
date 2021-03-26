#include <cstdio>
using namespace std;

bool myPrime(int x)
{
	if(x == 1) return false;
	if(x <= 3) return true;
	if(x % 2 == 0 || x % 3 == 0) return false;
	
	for(int i=5; i*i<=x; i = i+6){
		if(x % i == 0 || x % (i+2) == 0) return false;
	}
	return true;
}

int arr[1001];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=2; i<n+1; i++)
	{
		int index = 0;
		int tmp = i;
		while( tmp % 2 == 0) { tmp /= 2; arr[index]++; }
		index++;
		while( tmp % 3 == 0) { tmp /= 3; arr[index]++; }
		index++;
		for(int j =5; j <= i; j+=2)
		{
			if(myPrime(j))
			{
				while( tmp % j == 0 ) { tmp /= j; arr[index]++; }
				index++;
			}
			if( tmp == 1 ) break;
		}
	}
	int pin;
	for(int i=1000; i>=0; i--)
	{
		if(arr[i] != 0) { pin = i; break; }
	}
	printf("%d! =",n);
	for(int i=0; i<pin+1; i++)
		printf(" %d", arr[i]);
		
			
	return 0;

}

