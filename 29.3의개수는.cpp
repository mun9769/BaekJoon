#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	while(n>0) { 
		int tmp = n;
		if( n < 3 ) break;
		else if( n >= 3 && n < 10) { sum+=1; break; }
		int digit = 0;
		int first = 0;
		while(tmp >0) { first = tmp; tmp /= 10;  digit++; }

		int a = 1;
		for(int i=2; i<digit; i++)
			a = a + a * 9 + pow(10, i-1);

		if( n > 10) a = a * first;
		if(first > 3) a += pow(10,digit-1);
		n -= first * pow(10,digit-1);
		if(first == 3) a+= n+1;
		sum += a;
	}
	printf("%d\n",sum);
	
	return 0;
}

