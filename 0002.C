#include <stdio.h>

int main(void)
{
	int data[] = {83,42,39,79,13,75,19};
	int i,sum = 0,avg;
	int array_count = sizeof(data) / sizeof(data[0]);
	
	for (i = 0;i < array_count;i++) {
		sum += data[i];
	}
	
	avg = sum / array_count ;
	
	printf("%d\n",avg);
	
	return 0;
}
