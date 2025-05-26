#include<stdio.h>

void square(int* n)
{
	*n = (*n)*(*n);
}
int main()
{
	int num = 4;
	square(&num);
	printf("Square is:%d\n",num);
return 0;
}

