#include  <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	scanf("%d", &a[i]);
	int small = 999;
	int index1, index2;
	for(int i = 0; i < n - 1; i++)
	{
		if(abs(a[i] - a[i+1]) < small)
		{
			small = abs(a[i] - a[i+1]);
			index1 = i;
			index2 = i +1;
		}
	}

	if (abs(a[0] - a[n - 1]) < small)
	{
		index1 = 0;
		index2 = n - 1;
	}

	printf("%d %d", index1 + 1, index2 + 1);


}
