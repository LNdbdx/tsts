#include<stdio.h>
int main(void) 
{   
	int a, b;
	scanf_s("%d %d", &a, &b);
	double c = (a + b) / 2.0;
	printf("平均数为%f", c);
	
	return 0;
}