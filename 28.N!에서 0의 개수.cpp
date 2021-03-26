#include <cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int two = 0, five = 0;
	for(int i=2; i<n+1; i++)
	{
		int tmp = i;
		while( tmp % 2 == 0 ) { tmp /= 2; two++; }
		while( tmp % 5 == 0 ) { tmp /= 5; five++; }
	}
	if( two <= five ) { printf("%d", two);}
	else { printf("%d", five); }
		
			
	return 0;

}

